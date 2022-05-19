/*
Cho mảng A[] gồm N node là biểu diễn phép duyệt theo thứ tự giữa (Preorder) của cây nhị phân tìm kiếm. Nhiệm vụ của bạn là đưa ra phép duyệt theo thứ tự sau của cây nhị phân tìm kiếm.

            Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào số N là số lượng node; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
T, N, node thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤A[i]≤104;
Output:

Đưa ra kết quả phép duyệt Postorder theo từng dòng.
     Ví dụ:

 

Input
2
5
40 30 35 80 100
8
40 30 32 35 80 90 100 120
Output
35 30 100 80 40
35 32 30 120 100 90 80 40

*/
#include <bits/stdc++.h>
#include <cstring>
#define faster()				    \
	ios_base::sync_with_stdio(0);	\
	cin.tie(NULL);  	     	    \
	cout.tie(NULL)
#define test()				\
	int test;				\
	cin>>test;				\
	while(test--)		
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define pb push_back
#define f first 
#define s second
#define ll long long
#define ld long double
#define ulli usignal long long int
#define lli unsigned long long int
#define vec(c) vector<c>
#define vi vector<int>
#define vll vector<long long>
#define rev(c) reverse(c.begin(),c.end())
#define pau system("pause");
#define Mod 1000000007
#define N 1000001
#define Ite ::iterator
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *pre;
};
Node *Create_Node(int x){
    Node *temp=new Node;
    temp->data=x;
    temp->next=NULL;
    temp->pre =NULL;
    return temp;
}
Node *AddElement(Node *l,int x){
    Node *temp=l;
    if(l==NULL){
        temp=Create_Node(x);
    }else{
        if(l->data>x) l->pre=AddElement(l->pre,x);
        else l->next=AddElement(l->next,x);
    }
    return temp;
}
int to_int(string k){
    int h=0;
    For(i,0,k.size())
    h=h*10+k[i]-'0';
    return h;
}
void display(Node *l){
    if(l!=NULL){
        display(l->pre);
        display(l->next);
        cout<<l->data<<" ";
        
    }
}
void Count(Node *k){
    
}
int main(){
    faster();
    test(){
        int n,x; cin>>n;
        Node *l=NULL;
        For(i,0,n){
            cin>>x;
            l=AddElement(l,x);
        }
        display(l); 
        cout<<endl;
    }
}