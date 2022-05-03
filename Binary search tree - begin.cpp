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
	Node *temp=l;
    if(l==NULL){
        temp=Create_Node(x);  
    }
    else{
        if(l->data<x) l->right=insert_Node(l->right,x);
        else l->left=insert_Node(l->left,x);
    }
    return temp;
}
void display(Node *l){
    if(l!=NULL){
        display(l->left);   
        cout<<l->data<<" ";
        display(l->right);
    }
}
int main(){
    int n,x; cin>>n;
    Node *l=NULL;
    For(i,0,n){
        cin>>x;
        l=insert_Node(l,x);
    }
    display(l);
}
