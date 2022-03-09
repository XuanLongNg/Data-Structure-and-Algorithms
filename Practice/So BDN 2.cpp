/*
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K =  101 là số BDN, k=102 không phải là số BDN.

Số BDN của N là số P =M*N sao cho P là số BDN. Cho số tự nhiên N (N<1000), hãy tìm số BDN nhỏ nhất của N.

Ví dụ. Với N=2, ta tìm được số BDN của N là P = 5*2=10. N = 17 ta tìm được số BDN của 17 là P = 653*17=11101.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.
          Output:

                        Đưa ra kết quả mỗi test theo từng dòng.

          Ví dụ:

 

Input

Output

3

2

12

17
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
void check(ll i,ll &n){
    stack<ll> h;
    while(i){
        h.push(i%2);
        i/=2;
    }
    ll k=0;
    while(!h.empty()){
        k=k*10+h.top();
        h.pop();
    }
    if(k%n==0){
        cout<<k;
        n=0;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,i=1,count=0; cin>>n;
        while(n){
            check(i,n);
            i++;
        }
        cout<<endl;
    }
}

