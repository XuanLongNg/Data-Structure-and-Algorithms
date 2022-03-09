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
    douList *l=new douList;
    l->head=new node;
    l->head->next=NULL;
    l->head->pre=NULL;
    l->head->data=x;
    l->tail=l->head;
    return l;
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
douList *DeleteHead(douList *l){
    node *temp=l->head;
    node *p=l->head->next;
    p->pre=NULL;
    l->head=p;
    delete(temp);
    return l;
}
douList *rotate_series(douList *l,int k){
    For(i,0,k){
        node *temp=l->head;
        l=addTail(l,temp->data);
        l=DeleteHead(l);
    }
    cout<<endl;
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
    int n,y;
    cin>>n>>y;
    douList *l=create_node(y);
    For(i,1,n){
        cin>>y;
        l=addTail(l,y);
    }
    int k; cin>>k;
    l=rotate_series(l,k);
    print_list(l);
}