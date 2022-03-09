#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *Create_Node(int x){
	Node *temp=new Node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
Node *Add_Element(Node *p,int x){
	Node *temp=Create_Node(x);
	p->next=temp;
	return temp;
}
Node *Find(Node *l,int k){
	Node *p=l;
	For(i,0,k) p=p->next;
	return p;
}
int main(){
	int n; cin>>n;
	int x; cin>>x;
	Node *l=Create_Node(x);
	Node *p=l;
	For(i,1,n){
		cin>>x;
		p=Add_Element(p,x);
	}
	int k; cin>>k;
	p=Find(l,k);
	cout<<p->data;
}
