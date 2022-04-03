/*
Dãy số nguyên dương vô hạn A[] được định nghĩa một cách đệ quy như sau:

A[0] = 0
A[1] = 1;
A[i] = A[i-1] + A[i-2] với mọi n ≥ 2.
Cho số nguyên dương N không quá 109. Hãy xác định số thứ N trong dãy A[]. Nếu kết quả quá lớn, hãy in ra theo modulo 109+7.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 1000).
Mỗi test bắt gồm một số nguyên N (1 ≤ N ≤ 109).
Output: 

Với mỗi test, in ra đáp án trên một dòng.
Ví dụ:

Input:
2

2

6
Output
1

8

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
map<ll,ll> F;
ll fibo(ll n){
    if(F.count(n)) return F[n];
    ll k=n/2;
    if(n%2==0) return F[n]=(fibo(k)*fibo(k)+fibo(k-1)*fibo(k-1))%Mod;
    else return F[n]=(fibo(k)*fibo(k+1)+fibo(k-1)*fibo(k))%Mod;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n;
        F[0]=1;
        F[1]=1;
        cout<<fibo(n-1)<<endl;
        F.clear();
    }
}