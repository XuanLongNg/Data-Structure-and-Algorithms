#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct Node{
	int data;
	Node *next;
};
Node *CreateNode(int x){
	Node *temp=new Node;
	temp->data=x;
	temp->next=NULL;
	return temp;
}
Node *AddElement(Node *p,int x){
	Node *temp=CreateNode(x);
	p->next=temp;
	return temp;
}
Node *Convert(Node *l,int k,int h){
	Node *p=l;
	while(p!=NULL){
		if(p->data==k) p->data=h;
		p=p->next;
	}
	return l;
}
void PrintList(Node *l){
	Node *p=l;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main(){
	int n; cin>>n;
	int x; cin>>x;
	Node *l=CreateNode(x);
	Node *p=l;
	For(i,1,n){
		cin>>x;
		p=AddElement(p,x);
	}
	int k,h; cin>>k>>h;
	l=Convert(l,k,h);
	PrintList(l);
}
