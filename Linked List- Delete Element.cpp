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
void Print_List(Node *l){
	Node *p=l;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
Node *Delete_Head(Node *l){
    Node *temp=l->next;
	delete(l);
	l=temp;
	return l;
}
Node *Delete_Tail(Node *l){
    Node *p=l;
	while(p->next->next!=NULL) p=p->next;
	p->next=NULL;
	return l;
}
Node *Delete_At(Node *l,int k){
    Node *p=l;
	For(i,0,k-1) p=p->next;
	p->next=p->next->next;
	return l;
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
	if(k==0) l=Delete_Head(l);
	else if(k==n-1) l=Delete_Tail(l);
	else l=Delete_At(l,k);
	Print_List(l);
}
