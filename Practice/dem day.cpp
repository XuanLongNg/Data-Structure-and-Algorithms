/*
Cho số nguyên dương n. Hãy cho biết có bao nhiêu dãy số nguyên dương có tổng các phần tử trong dãy bằng n. 

Dữ liệu vào: dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ liệu ghi một số nguyên dương n duy nhất không qua 1018. 

Kết quả: Mỗi bộ dữ liệu ghi ra một số nguyên duy nhất là số dư của kết quả tìm được khi chia cho 123456789.

Ví dụ:

Input
1

3
Output

	
4
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
const ll key=123456789;
ll Pow(ll n,ll k){
    if(k==1) return n%key;
    ll temp=Pow(n,k/2);
    if(k%2==0) return temp*temp%key;
    return (temp*temp%key)*n%key;
}
int main(){
    int t; cin>>t;
    while(t--){ 
        ll n; cin>>n;
        cout<<Pow(2,n-1)<<endl;
    }
}
