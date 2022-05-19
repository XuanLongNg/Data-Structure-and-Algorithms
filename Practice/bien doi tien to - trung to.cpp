/*
Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng tiền tố về dạng trung tố.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức tiền tố exp.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤106.
Ví dụ:

Input
2

*+AB-CD

*-A/BC-/AKL
Output
((A+B)*(C-D))

((A-(B/C))*((A/K)-L)
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
void convert(string s){
	stack<string> temp;
	string ans;
	Fori(i,0,s.size()){
		if(Operator(s[i])){
            string h;
            h+="(";
            h+=temp.top();
            temp.pop();
            h+=s[i];
            h+=temp.top();
            temp.pop();
            h+=")";
            temp.push(h);
        }
		else if(operand(s[i])){
            string h="";
            h+=s[i];
            temp.push(h);
        }
	}
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
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