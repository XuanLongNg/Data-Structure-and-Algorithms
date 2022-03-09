/*
Cho một hoán vị của N số nguyên dương đầu tiên.

Hãy xác định xem đó là hoán vị thứ bao nhiêu nếu liệt kê theo thứ tự tăng dần (tính từ 1).

Input

Dòng đầu ghi số T là số bộ test (T < 10)

Mỗi bộ test gồm 2 dòng

Dòng đầu ghi số nguyên dương N (3 < N < 10)
Dòng tiếp theo ghi một hoán vị của các số nguyên dương từ 1 đến N.  
Output

Với mỗi bộ test, ghi ra trên một dòng số thứ tự của hoán vị (tính từ 1, theo thứ tự liệt kê tăng dần).

Ví dụ

Input
2

4

1 4 3 2

4

1 2 3 4
Output
6

1
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int m;
vector<int> x;
void checkA(int *a,int n,int &k){
    For(i,0,n)
    if(a[i]!=x[i]){
        m++;
        return;
    }
    cout<<m<<endl;
    k=1;
}
bool check[10];
void Try(int *a,int n,int i,int k){
    if(k==1) return;
    For(j,0,n){
        if(check[j]==0){
            a[i]=j+1;
            check[j]=1;
            if(i==n-1) checkA(a,n,k);
            else Try(a,n,i+1,k);
            check[j]=0;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n;
        m=1;
        For(i,0,n){
            cin>>k;
            x.push_back(k);
        }
        int a[10];
        Try(a,n,0,0);
        x.clear();
    }
}
