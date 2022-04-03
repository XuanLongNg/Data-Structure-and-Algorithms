/*
Cho 2 số nguyên n, k. Bạn hãy tính C(n, k) modulo 109+7.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 2 số nguyên n, k (1 ≤ k ≤ n ≤ 1000).
Output: 

Với mỗi test, in ra đáp án trên một dòng.
Ví dụ:

Input
2

5 2

10 3  
Output

10

120 
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
#define mod 1000000007
using namespace std;
ll C(ll n, ll k){
    vector<vector<ll>> a;
    For(i,0,k+1){
        vector<ll>h;
        h.resize(n+1,0);
        a.push_back(h);
    }
    if (k==0||k==n) return 1;
    else 
    For(i,0,k+1)
        For(j,i,n+1)
            if (i==0||i==j) a[i][j]=1;
            else a[i][j]=(a[i][j-1]+a[i-1][j-1])%Mod;
    return a[k][n];
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        cout<<C(n,k)<<endl;
    }
}