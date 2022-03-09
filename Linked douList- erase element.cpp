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
DouList *Create_Node(int x){
    DouList *temp=new DouList;
    temp->head=new Node;
    temp->head->next=NULL;
    temp->head->pre=NULL;
    temp->head->data=x;
    temp->tail=temp->head;
    return temp;
}
DouList *Add_Tail(DouList *l,int x){
    Node *temp=new Node;
    temp->next=NULL;
    temp->data=x;
    temp->pre=l->tail;
    l->tail->next=temp;
    l->tail=temp;
    return l;
}
void Print_List(DouList *l){
    Node *p=l->head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
DouList *Delete_Head(DouList *l){
    Node *temp=l->head->next;
    Node *p=l->head;
    temp->pre=NULL;
    l->head=temp;
    delete(p);
    return l;
}
DouList *Delete_Tail(DouList *l){
    Node *temp=l->tail->pre;
    Node *p=l->tail;
    temp->next=NULL;
    l->tail=temp;
    delete(p);
    return l;
}
DouList *Delete_At(DouList *l,int k){
    Node *temp=l->head;
    For(i,0,k-1) temp=temp->next;
    Node *p=temp->next;
    temp->next->next->pre=temp;
    temp->next=temp->next->next;
    delete(p);
    return l;
}
int main(){
    int n,y;
    cin>>n>>y;
    DouList *l=Create_Node(y);
    For(i,1,n){
        cin>>y;
        l=Add_Tail(l,y);
    }
    int k; cin>>k;
    if(k==0) Delete_Head(l);
    else if(k==n-1) Delete_Tail(l);
    else Delete_At(l,k);
    Print_List(l);
}