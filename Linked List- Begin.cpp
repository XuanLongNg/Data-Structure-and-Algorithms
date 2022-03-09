#include<iostream>
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
int main(){
	int n,x; cin>>n;
	cin>>x;
	Node *l=Create_Node(x);
	Node *p=l;
	For(i,1,n){
		cin>>x;
		p=Add_Element(p,x);
	}
	Print_List(l);
}
