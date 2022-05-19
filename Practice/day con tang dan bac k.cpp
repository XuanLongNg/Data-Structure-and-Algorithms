/*
Cho dãy gồm N số phân biệt AN = {a1, a2, .., aN } và số tự nhiên K (K<=N<=100). Ta gọi một dãy con tăng dần bậc K của dãy số AN là một dãy các số gồm K phần tử trong dãy đó thỏa mãn tính chất tăng dần. Bài toán được đặt ra là in ra màn hình  số các dãy con tăng dần bậc K của dãy số AN. Ví dụ :

Input:  5    3

2    5    15   10    20  

Dòng đầu tiên ghi lại hai số N và K tương ứng với số phần tử của dãy số và bậc của dãy con.
Dòng kế tiếp : N số của dãy số AN, các số trong dãy không lớn hơn 100. 
thì Output : 7 (số các dãy con tăng dần bậc 3 của dãy số AN)
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
#define pii pair<int,int>
using namespace std;
vi a;
int n,k; 
int ans =0;
void Try(int i,int j){
    if(i==k){
        ans++;
        return;
    }
    For(x,j,n){
        if(i==0) Try(i+1,x);
        else if(a[j]<a[x]){
            Try(i+1,x);
        }
    }
}
int main(){
    cin >>n>>k;
    For(i,0,n){
        int x; cin>>x;
        a.push_back(x);
    }
    Try(0,0);
    cout<<ans<<endl;
}