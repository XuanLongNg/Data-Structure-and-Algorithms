#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *insert_Node(Node *l,int x){
	Node *temp=l;
    if(l==NULL){
        Node *temp=new Node;
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;   
        return temp;
    }
    else{
        if(l->data<x) l->right=insert_Node(l->right,x);
        else l->left=insert_Node(l->left,x);
    }
    return temp;
}
int Count_leaf_Node(Node *l){
    if(l==NULL) return 0;
    if(l->left==NULL&&l->right==NULL) return 1;
    return Count_leaf_Node(l->left)+Count_leaf_Node(l->right);
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
    cout<<Count_leaf_Node(l)<<endl;
}
