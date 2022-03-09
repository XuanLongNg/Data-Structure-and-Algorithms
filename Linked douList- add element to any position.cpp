#include <bits/stdc++.h>
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
    temp->pre=NULL;
    temp->next=p->head;
    temp->data=x;
    p->head->pre=temp;
    p->head=temp;
    return p;
}
DouList *Add_Tail(DouList *p,int x){
    Node *temp=new Node;
    temp->next=NULL;
    temp->pre=p->tail;
    temp->data=x;
    p->tail->next=temp;
    p->tail=temp;
    return p;
}
DouList *Add_At(DouList *l,int k,int x){
    Node *p=l->head;
    For(i,0,k-1) p=p->next;
    Node *temp=new Node;
    temp->data=x;
    temp->pre=p;    
    temp->next=p->next;
    p->next->pre=temp;
    p->next=temp;
    return l;
}
void Print_List(DouList *l){
    Node *p=l->head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int n,x,k;
    cin>>n>>x;
    DouList *l=Create_DouList(x);
    For(i,1,n){
        cin>>x;
        l=Add_Tail(l,x);
    }
    cin >> k >> x;
	if (k == 0){
		l = Add_Head(l, x);
	} else if (k == n){
		l = Add_Tail(l, x);
	} else{
		l = Add_At(l, k, x);
	}
    Print_List(l);
}