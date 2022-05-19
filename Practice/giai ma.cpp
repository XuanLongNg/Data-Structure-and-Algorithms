/*
Một bản tin M đã mã hóa bí mật thành các con số theo ánh xạ như sau: ‘A’->1, ‘B’->2, .., ‘Z’->26. Hãy cho biết có bao nhiêu cách khác nhau để giải mã bản tin M. Ví dụ với bản mã M=”123” nó có thể được giải mã thành ABC (1 2 3), LC (12 3), AW(1 23).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự số M.
T, M thỏa mãn ràng buộc: 1≤T≤100;  1≤length(M)≤40.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input

2
123
2563
Output
3
2
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
int gt(int n){
    if(n==0) return 1;
    return n*gt(n-1);
}
bool check(string k){
    if(k[0]=='0') return false;
    int h=stoi(k);
    if(h>0&&h<27) return true;
    return false;
}
int Try(string n)
{
    vi dp(n.size()+1);
    dp[n.size()]=1;
    dp[n.size()-1]=check(string(n.begin()+n.size()-1,n.end()));
    Fori(i,0,n.size()-1){
        dp[i]=check(string(n.begin()+i,n.begin()+i+1))*dp[i+1];
        dp[i]+=check(string(n.begin()+i,n.begin()+i+2))*dp[i+2];
    }
    return dp[0];
}
int main(){
    faster();
    test(){
        string n; cin>>n;
        cout<<Try(n)<<endl;
    }
}
