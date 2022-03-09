#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct node{
    int data;
    node *next;
    node *pre;
};
struct douList{
    node *head;
    node *tail;
};
douList *create_node(int x){
    douList *temp=new douList;
    temp->head=new node;
    temp->head->data=x;
    temp->head->next=NULL;
    temp->head->pre=NULL;
    temp->tail=temp->head;
    return temp;
}
douList *addHead(douList *p,int x){
    node *temp=new node;
    temp->data=x;
    temp->next=p->head;
    temp->pre=NULL;
    p->head->pre=temp;
    p->head=temp;
    return p;
}
douList *addTail(douList *l,int x){
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=l->tail;
    l->tail->next=temp;
    l->tail=temp;
    return l;
}
void print_list(douList *l){
    node *p=l->head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int n;
    cin>>n;
    douList *l=create_node(1);
    For(i,2,n+1){
        l=addTail(l,i);
        l=addHead(l,i);
        
    }
    print_list(l);
}