/*
Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là số n là số bước con ếch có thể lên được đỉnh.
T, n thỏa mãn ràng buộc: 1≤T≤100;  1≤n ≤50.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
1
5
Output
1
13
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
ll check(int n){
    ll a[n+1];
    a[0]=1; a[1]=1; a[2]=2;
    For(i,3,n+1) a[i]=a[i-1]+a[i-2]+a[i-3];
    return a[n];
}
int main(){
    int t; cin>>t;
    while(t--){ 
        int n; cin>>n;
        cout<<check(n)<<endl;
    }
}

