/*
Cây biểu thức là một cây nhị phân trong đó mỗi node trung gian là một phép toán, mỗi node lá là một toán hạng. Ví dụ với biểu thức P = 3 + ((5+9)*2) sẽ được biểu diễn như cây dưới đây.

        +
       / \
      3   *
         / \
        +   2
       / \
       5  9
Đối với cây biểu thức, duyệt theo thứ tự trước ta sẽ được biểu thức tiền tố, duyệt theo thứ tự sau ta sẽ được biểu thức hậu tố, duyệt theo thứ tự giữa ta được biểu thức trung tố. Chú ý, cây biểu thức luôn là cây nhị phân đầy (mỗi node trung gian đều có hai node con).

Cho biểu thức hậu tố P, hãy sử dụng cây biểu thức để đưa ra biểu thức trung tố tương ứng với biểu thức P.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test là một biểu thức hậu tố P.
T, P thỏa mãn ràng buộc : 1≤T≤100; 1≤lengh(P)≤100.
Output:

Đưa ra biểu thức trung tố tương ứng với P.
vd:
input: 
2
ab+ef*g*-
wlrb+-*
output:
a + b - e * f * g

w * l - r + b
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
    string data;
    Node *next;
    Node *pre;
};
Node *CreateNode(string data){
    Node *temp=new Node;
    temp->data = data;
    temp->next =NULL;
    temp->pre =NULL;
    return temp;
}
Node *AddNode(Node  *l,string data){
    Node *temp;
    if(l==NULL){
        temp=CreateNode(data);
    }else{
        
    }
    return temp;
}
void Print_Root(Node *l){
    if(l!=NULL){
        Print_Root(l->pre);
        cout<<l->data<<" ";
        Print_Root(l->next);
    }
}
int priority(char k){
    if(k=='+'||k=='-') return 1;
    if(k=='*'||k=='/') return 2;
    return 0;
}
void postfix(stack<char> k,string &ans0,string data){
    For(i,0,data.size()){
        if(data[i]=='+'||data[i]=='-'||data[i]=='*'||data[i]=='/'){
            while(priority(data[i])>priority(k.top())&&!k.empty()){
                ans0+=k.top();
                k.pop();
            }
            k.push(data[i]);
        }
        else{
            ans0+=data[i];
        }
    }
    while(!k.empty()){
        ans0+=k.top();
        k.pop();
    }
}
int main(){
    faster();
    test(){
        int n;
        string data,ans0;
        Node *l;
        stack<char> ans;
        cin>>data;
        postfix(ans,ans0,data);
        cout<<ans0;
    }
    
}
