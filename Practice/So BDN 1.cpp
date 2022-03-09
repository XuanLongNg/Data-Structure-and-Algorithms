/*
Ta gọi số nguyên dương K là một số BDN nếu các chữ số trong K chỉ bao gồm các 0 hoặc 1 có nghĩa. Ví dụ số K = 1, 10, 101. Cho số tự nhiên N (N<263). Hãy cho biết có bao nhiêu số BDN nhỏ hơn N. Ví dụ N=100 ta có 4 số BDN bao gồm các số: 1, 10, 11, 100.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng Test;
T dòng kế tiếp mỗi dòng ghi lại một bộ Test. Mỗi test là một số tự nhiên N.
            Output:

Đưa ra kết quả mỗi test theo từng dòng.
            Ví dụ:

Input
3

10

100

200
Output
2

4

7
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
void check(ll i,ll &n,ll &count){
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
    if(k<=n){
        count++;
    }
    else n=0;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,i=1,count=0; cin>>n;
        while(n){
            check(i,n,count);
            i++;
        }
        cout<<count<<endl;
    }
}
