/*
Cho dãy số A[] gồm có N phần tử.

Nhiệm vụ của bạn là hãy đếm số bộ ba (i, j, k) mà A[i] + A[j] + A[k] < K cho trước.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên N và K (1≤ N ≤5000, -109 ≤ K ≤ 109).

Dòng tiếp theo gồm N số nguyên A[i] (-109 ≤ A[i] ≤ 109).

Output: 

Với mỗi test, in ra trên một dòng là đáp án tìm được.

Ví dụ:

Input
2

4 2

-2 0 1 3

5 12
5 1 3 4 7
Output
2

4

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
            if(x>j) x=j;
            dem+=x;
        }
    }
    cout<<dem<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        Try();
    }
}
