#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *Create_Node(int x){
    Node *temp=new Node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;   
    return temp;
}
Node *insert_Node(Node *l,int x){
    if(l==NULL){
        Node *temp=Create_Node(x);
        return temp; 
    }
    else{
        if(l->data<x) l->right=insert_Node(l->right,x);
        else if(l->data>x) l->left=insert_Node(l->left,x);
    }
  
}
void display(Node *l){
    while(l!=NULL){
        display(l->left);   
        cout<<l->data<<" ";
        display(l->right);
    }
}
int main(){
    int n,x; cin>>n>>x;
    Node *l=Create_Node(x);
    For(i,1,n){
        cin>>x;
        l=insert_Node(l,x);
    }
    display(l);
}