/*
Cho danh sách liên kết đơn lưu giữ các số nguyên được quản lý bởi con trỏ First. Viết chương trình con xóa tất cả các phần tử có giá trị bằng x trong danh sách liên kết đơn; chương trình con trả về số lượng các phần tử đã xóa. Sau khi xóa xong, liệt kê các phần tử còn lại trong danh sách liên kết đơn First. Ví dụ: Ta có Input sau:

14 : là số lượng phần tử trong danh sách

1 1 1 4 5 1 1 1 1 7 1 8 1 9   : là 14 phần tử

1 : là số cần xóa

Output :  4 5 7 8 9
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *CreateNode(int x){
    Node *temp=new Node;
    temp->data=x;
    temp->next=NULL;
    return temp;
}
Node *AddElement(Node *p,int x){
    Node *temp=CreateNode(x);
    p->next=temp;
    return temp;
}
void display(Node *l){
    Node *p=l;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
Node *EraseElement(Node *l,int x){
    Node *p=l;
    while(p->data==x){
        p=p->next;
    }
    Node *temp=CreateNode(p->data);
    Node *temp1=temp;
    p=p->next;
    while(p!=NULL){
        if(p->data!=x) temp=AddElement(temp,p->data);
        p=p->next;
    }
    delete(l);
    return temp1;
}
int main(){
    int n,x,k; cin>>n>>x;
    Node *l=CreateNode(x);
    Node *p=l;
    For(i,1,n){
        cin>>x;
        p=AddElement(p,x);
    }
    cin>>k;
    l=EraseElement(l,k);
    display(l);
}