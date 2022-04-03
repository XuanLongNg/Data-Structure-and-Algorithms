/*
Dãy số Fibonacci được xác định bằng công thức như sau:

F[0] = 0, F[1] = 1;

F[n] = F[n-1] + F[n-2] với mọi n >= 2.

Các phần tử đầu tiên của dãy số là 0, 1, 1, 2, 3, 5, 8, ...

Nhiệm vụ của bạn là hãy xác định số Fibonaci thứ n. Do đáp số có thể rất lớn, in ra kết quả theo modulo 109+7.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 1000).

Mỗi test bắt gồm một số nguyên N (1 ≤ N ≤ 109).

Output: 

Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:

Input:
3

2

6

20
Output
1

8

6765

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
map<ll, ll>F;
ll fibo(ll n){
    if(F.count(n)) return F[n];
    ll k=n/2;
    if(n%2==0) return F[n]=(fibo(k)*fibo(k)+fibo(k-1)*fibo(k-1))%Mod;
    else return F[n]=(fibo(k)*fibo(k+1)+fibo(k-1)*fibo(k))%Mod;
}
int main(){
    int t; cin>>t;
    F[0]=1;F[1]=1;
    while(t--){
        int n; cin>>n;
        cout<<fibo(n-1)<<endl;
    }
}