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
Node *Find(Node *l,int k){
	Node *p=l;
	For(i,0,k) p=p->next;
	return p;
}
Node *Delete_value_greater_than_k(Node *l,int k,int n){
	int h=Find(l,k)->data;
	Node *p=l;
	Node *temp=Create_Node(p->data);
	Node *temp2=temp;
	p=p->next;
	while(p!=NULL){
		if(p->data<=h){
            temp2=Add_Element(temp2,p->data);
		}
		p=p->next;
	}
	if(temp->data>h){
		Node *x=temp->next;
		delete(temp);
		temp=x;
	}
	return temp;
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
	l=Delete_value_greater_than_k(l,k,n);
	Print_List(l);   
}
