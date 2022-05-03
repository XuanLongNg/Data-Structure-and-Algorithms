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
bool ans1(char k){
    if(k=='1'||k=='2') return true;
    return false;
}
int Try(int dp[3][10],string n,int &ans){
    int count=0,h, check=0;
    For(i,0,3){
        For(j,0,n.size()){
            if(n[j]=='0'&&n[j-1]!='1'&&n[j-1]!='2') return 0;
            if(n[j-1]==i+'0'){
                dp[i][n[j]-'0']++;
                if(ans1(n[j-1])&&ans1(n[j-2])){
                    check++;
                    if(n[j-1]=='2'&&n[j]>='7') check--;
                }
            }
            else if(i==0) dp[i][n[j]-'0']++;
        }
    }
    int i=9;
    ans=1;
    while(i>=7){
        dp[2][i]=0;
        i--;
    }
    For(i,1,3){
        For(j,0,10) 
        if(j!=0) count+=dp[i][j];
    }
    h=1;
    while(h<=count){
        count-=h==2?(check>1?check/2:check):0;
        if(count<h) break;
        ans+=gt(count)/(gt(h)*gt(count-h));
        h++;
    }
    return ans;
}
int main(){
    faster();
    test(){
        string n; cin>>n;
        int dp[3][10],ans=0;
        For(i,0,3)
        For(j,0,10) dp[i][j]=0;
        cout<<Try(dp,n,ans)<<endl;
    }
}
