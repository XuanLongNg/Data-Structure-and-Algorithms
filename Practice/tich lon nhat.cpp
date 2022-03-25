/*
Cho dãy số A gồm N phần tử là các số nguyên. Hãy tính tích lớn nhất của 2 hoặc 3 phần tử trong dãy.

Input

Dòng đầu tiên ghi số N (3 ≤ N ≤ 10000)

Dòng thứ 2 ghi N số của dãy A (|Ai| ≤ 1000)

Outpput

Ghi ra kết quả trên một dòng

Ví dụ

Input
6

5 10 -2 3 5 2
Output
250

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
int main(){
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    sort(a,a+n);
    int min1=1,min2=1,max1=1,max2=1;
    int nhan2,nhan3;
    nhan2=max(a[0]*a[1],a[n-1]*a[n-2]);
    nhan3=max(a[0]*a[1]*a[2],a[n-3]*a[n-2]*a[n-1]);
    nhan3=max(nhan3,a[0]*a[1]*a[n-1]);
    nhan3=max(nhan3,nhan2);
    cout<<nhan3<<endl;
}
