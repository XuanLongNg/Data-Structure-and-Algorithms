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
Node *Add_Head(Node *p,int x){
	Node *temp=Create_Node(x);
    temp->next=p;
	p=temp;
	return p;
}
Node *Add_Tail(Node *l,int x){
    Node *p=l;
	while(p->next!=NULL) p=p->next;
	Node *temp=Create_Node(x);
	p->next=temp;
	return l;
}
Node *Add_At(Node *l,int x,int k){
	Node *p=l;
	For(i,0,k-1) p=p->next;
    Node *temp=Create_Node(x);
	temp->next=p->next;
    p->next=temp;
	return l;
}
int main(){
	int n, x, k;
	cin >> n;
	cin >> x;
	Node *l = Create_Node(x);
	Node *p = l;
	for (int i = 1; i < n; i++){
		cin >> x;
		p = Add_Element(p, x);
	}
	cin >> k >> x;
	if (k <= 0){
		l = Add_Head(l, x);	
	}else if(k>=n-1){
        l = Add_Tail(l, x);
	}else{
        l= Add_At(l, x, k);
	}
	Print_List(l);
	return 0;
}
