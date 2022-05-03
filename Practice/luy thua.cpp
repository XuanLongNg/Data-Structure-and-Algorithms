/*
Cho số nguyên dương N và K. Hãy tính NK modulo 109+7.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 1 số nguyên N và K (1 ≤ N ≤ 1000, 1 ≤ K ≤ 109).

Output: 

Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:

Input:

2

2 3

4 2

Output
8

16
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1239
#define ll long long
using namespace std;
ll Pow(ll a,ll b){
    if(b==0) return 1;
    if(b%2==0){
        ll k=Pow(a,b/2);
        return k*k%Mod;
    }else return a*Pow(a,b-1)%Mod;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n>>k;
        cout<<Pow(n,k)<<endl;
    }
}
