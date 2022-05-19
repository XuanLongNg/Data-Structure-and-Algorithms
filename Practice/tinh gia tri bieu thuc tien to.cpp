/*
Hãy viết chương trình tính toán giá trị của biểu thức tiền tố.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp. Các số xuất hiện trong biểu thức là các số đơn có 1 chữ số.
Output:

Đưa ra kết quả mỗi test theo từng dòng, chỉ lấy giá trị phần nguyên.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.
Ví dụ:

Input
2

-+8/632

-+7*45+20
Output
8

25

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
int Ope(int a,int b,char k){
    if(k=='+') return a+b;
    if(k=='-') return a-b;
    if(k=='/') return a/b;
    if(k=='*') return a*b;
    if(k=='^') return pow(a,b);
    return 0;
}
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
void convert(string s){
	stack<int> temp;
	Fori(i,0,s.size()){
		if(Operator(s[i])){
            int h=0;
            int d,c;
            d=temp.top();
            temp.pop();
            c=temp.top();
            temp.pop();
            h+=Ope(d,c,s[i]);
            temp.push(h);
        }
		else if(operand(s[i])){
            temp.push(s[i]-'0');
        }
	}
    cout<<temp.top();
    temp.pop();
    cout<<endl;
}
int main(){
    faster();
    test(){
        string s;
        cin>>s;
		convert(s);
    }
}