#include<iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct Node{
	int data;
	Node *next;
    Node *pre;
};
struct DouList{
    Node *head;
    Node *tail;
};
DouList *Create_DouList(int x){
    DouList *temp=new DouList;
    temp->head=new Node;
	temp->head->next=NULL;
    temp->head->pre=NULL;
    temp->head->data=x;
    temp->tail=temp->head;
	return temp;
}
DouList *Add_Head(DouList *p,int x){
    Node *temp=new Node;
    temp->data=x;
    temp->next=p->head;
    temp->pre=NULL;
    p->head->pre=temp;
    p->head=temp;
    return p;
}
DouList *Add_Tail(DouList *p,int x){
    Node *temp=new Node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=p->tail;
    p->tail->next=temp;
    p->tail=temp;
    return p;
}
void Print_List(DouList *l){
	Node *p=l->head;
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main(){
	int n,x; cin>>n;
	DouList *l=Create_DouList(1);
	For(i,2,n+1){
        l=Add_Head(l,i);
        l=Add_Tail(l,i);
    }
	Print_List(l);
}
