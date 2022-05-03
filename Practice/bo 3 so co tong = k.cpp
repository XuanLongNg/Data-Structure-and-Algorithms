/*
Cho dãy số A[] gồm có N phần tử.

Nhiệm vụ của bạn là hãy kiểm tra tồn tại bộ ba (i, j, k) mà A[i] + A[j] + A[k] = K cho trước hay không.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên N và K (1≤ N ≤5000, 0 ≤ K ≤ 10^9).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10^9).

Output: 

Với mỗi test, in ra trên một dòng là “YES” nếu tìm được bộ ba thỏa mãn, “NO” trong trường hợp ngược lại.

 

Ví dụ:

Input:
2

6 22

1 4 15 6 10 8

3 4

1 1 1
Output

YES

NO
*/
#include <bits/stdc++.h>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
vector<ll> a;
ll n,k,h,dem=0; 
void Try(){
    dem=0;
    a.clear();
    cin>>n>>k;
    For(i,0,n){
        cin>>h;
        a.push_back(h);
    }
    sort(a.begin(),a.end());
    For(i,2,n){
        For(j,1,i){
            ll x=lower_bound(a.begin(),a.end(),k-a[i]-a[j])-a.begin();
            if(a[x]+a[i]+a[j]==k&&x!=i&&x!=j){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}
int main(){
    int t; cin>>t;
    while(t--){
        Try();
    }
}