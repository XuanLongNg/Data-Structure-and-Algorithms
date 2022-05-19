/*
Cho một xâu chỉ gồm các kí tự ‘(‘ và ‘)’. Một dãy ngoặc đúng được định nghĩa như sau:

-     Xâu rỗng là 1 dãy ngoặc đúng.

-     Nếu A là 1 dãy ngoặc đúng thì (A) là 1 dãy ngoặc đúng.

-     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.

Cho một xâu S. Nhiệm vụ của bạn là hãy tìm dãy ngoặc đúng dài nhất xuất hiện trong xâu đã cho.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm một xâu S có độ dài không vượt quá 105 kí tự.

Output:  Với mỗi test in ra một số nguyên là độ dài dãy ngoặc đúng dài nhất tìm được.

Ví dụ:

Input:
3

((()

)()())

()(()))))
Output
2

4

6

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
void convert(string s){
    stack<pair<char,int>> a;
    vi dp;
    dp.resize(s.size(),0);
    int ans=0, fans=0;
	For(i,0,s.size()){
		if(!a.empty()&&s[i]==')'&&a.top().first=='('){
            dp[i]=2;
            if(dp[i-1]>0) dp[i]+=dp[i-1];
            if(a.top().second>0) dp[i]+=dp[a.top().second-1];
            ans=max(ans,dp[i]);
            a.pop();
        }else{
            a.push(pair<char,int>(s[i],i));
        }
	}
    cout<<ans<<endl;
}
int main(){
    faster();
    test(){
        string s;
        cin>>s;
		convert(s);
    }
}