/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng hậu tố về dạng trung tố.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
T, exp thỏa màng ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Ví dụ:

Input
2

ABC++

AB*C+
Output


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
bool Operator(char k){
    if(k=='+'||k=='-'||k=='*'||k=='/'||k=='^') return true;
    return false;
}
bool operand(char k){
    if((k>='A'&&k<='Z')||(k>='a'&&k<='z')) return 1;
    if(k>='0'&&k<='9') return 1;
    return 0;
}
int priority(char k){
    if(k=='+'||k=='-') return 1;
    if(k=='*'||k=='/') return 2;
    if(k=='^') return 3;
    return 0;
}
void postfix(string k){
    string ans;
    stack<string> h;
    For(i,0,k.size()){
        string as;
        as+=k[i];
        if(operand(k[i])) h.push(as);
        else if(Operator(k[i])){
            string g="(";
            string dd,dc=h.top();
            h.pop();
            dd=h.top();
            h.pop();
            g+=dd+as+dc+")";
            h.push(g);
        }
    }
    while(!h.empty()){
        ans+=h.top();
        h.pop();
    }
    cout<<ans<<endl;
}
int main(){
    faster();
    test(){
        scanf("\n");
        string k;
        cin >> k;
        postfix(k);
    }
}