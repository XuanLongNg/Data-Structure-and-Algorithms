/*
Yêu cầu bạn xây dựng một hàng đợi hai đầu với các truy vấn sau đây:

“PUSHFRONT x”: Thêm phần tử x vào đầu của dequeue (0 ≤ x ≤ 1000).

“PRINTFRONT”: In ra phần tử đầu tiên của dequeue. Nếu dequeue rỗng, in ra “NONE”.

“POPFRONT”: Xóa phần tử đầu của dequeue. Nếu dequeue rỗng, không làm gì cả.

“PUSHBACK x”: Thêm phần tử x vào cuối của dequeue (0 ≤ x ≤ 1000).

“PRINTBACK”: In ra phần tử cuối của dequeue. Nếu dequeue rỗng, in ra “NONE”.

“POPBACK”: Xóa phần tử cuối của dequeue. Nếu dequeue rỗng, không làm gì cả.

Dữ liệu vào:

Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).

Mỗi truy vấn có dạng như trên.

Kết quả: 

Với mỗi truy vấn “PRINTFRONT” và “PRINTBACK”, hãy in ra kết quả trên một dòng.

Ví dụ:

Input

10

PUSHBACK 1

PUSHFRONT 2

PUSHBACK 3

PRINTFRONT

POPFRONT

PRINTFRONT

POPFRONT

PRINTBACK

POPFRONT

PRINTBACK

Output
2

1

3

NONE
*/


/*
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <sstream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
queue<int> Que;
struct Node{
    int data;
    Node *next;
    Node *pre;
};
struct Dequeue{
    Node *head;
    Node *tail;
};
Node *CreateNode(int x){
    Node *temp=new Node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=NULL;
    return temp;
}
Dequeue *CreateDequeue(int x){
    Dequeue *h=new Dequeue;
    h->head=CreateNode(x);
    h->tail=h->head;
    return h;
}
bool IsEmpty(Dequeue *l){
    return l==NULL;
}
int size(Dequeue *l){
    if(IsEmpty(l)) return 0;
    int count=0;
    Node *p=l->head;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}
int top(Dequeue *l){
    if(IsEmpty(l)){
        cout<<"empty list"<<endl;
    }
    return l->head->data;
}
int last(Dequeue *l){
    if(IsEmpty(l)){
        cout<<"empty list"<<endl;
    }
    return l->tail->data;
}
void Print_List(Dequeue *l){
    Node *p=l->head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
Dequeue *push_back(Dequeue *l,int x){
    if(IsEmpty(l)){
        return CreateDequeue(x);
    }
    Node *temp=CreateNode(x);
    temp->pre=l->tail;
    l->tail->next=temp;
    l->tail=temp;
    return l;
}
Dequeue *push_front(Dequeue *l,int x){
    if(IsEmpty(l)){
        return CreateDequeue(x);
    }
    Node *temp=CreateNode(x);
    temp->next=l->head;
    l->head->pre=temp;
    l->head=temp;
    return l;
}
Dequeue *pop_back(Dequeue *l){
    Node *temp=l->tail;
    l->tail=l->tail->pre;
    l->tail->next=NULL;
    delete temp;
    return l;
}
Dequeue *pop_front(Dequeue *l){
    Node *temp=l->head;
    l->head=l->head->next;
    l->head->pre=NULL;
    delete temp;
    return l;
}
void clear(Dequeue *l){
    while(!IsEmpty(l)) l=pop_back(l);
}
void check(Dequeue *deque,string k,int x){
    if(k=="PRINTFRONT")
        if(IsEmpty(deque)) cout<<"NODE\n";
        else cout<<top(deque)<<endl;
    else if(k=="POPFRONT"&&!IsEmpty(deque)) deque=pop_front(deque);
    else if(k=="PUSHFRONT"){
        cin>>x; deque=push_front(deque,x);
    }
    else if(k=="PRINTBACK")
        if(IsEmpty(deque)) cout<<"NODE\n";
        else cout<<last(deque)<<endl;
    else if(k=="POPBACK"&&!IsEmpty(deque)) deque=pop_back(deque);
    else if(k=="PUSHBACK"){
        cin>>x; deque=push_back(deque,x);
    }
}

int main(){
    int n,x; cin>>n;
    Dequeue *deque=NULL;
    string k;cin>>k;
    check(deque,k,x);
    Print_List(deque);
}
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <sstream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
void check(std::deque<int>&a,string k,int x){
    if(k=="PRINTFRONT")
        if(a.empty()) cout<<"NONE\n";
        else cout<<a.front()<<endl;
    else if(k=="POPFRONT"&&!a.empty()) a.pop_front();
    else if(k=="PUSHFRONT"){
        cin>>x; a.push_front(x);
    }
    else if(k=="PRINTBACK")
        if(a.empty()) cout<<"NONE\n";
        else cout<<a.back()<<endl;
    else if(k=="POPBACK"&&!a.empty()) a.pop_back();
    else if(k=="PUSHBACK"){
        cin>>x; a.push_back(x);
    }
}

int main(){
    int n; cin>>n;
    deque<int> deque;
    while(n--){
        string k; cin>>k;
        int x;
        check(deque,k,x);
    }
}