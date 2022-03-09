/*
Cho số nguyên dương N (2 < N <10). Một số nguyên dương K có N chữ số được gọi là số xa cách nếu thỏa mãn:

K không chứa chữ số 0
Tất cả các chữ số từ 1 đến N đều xuất hiện trong K đúng 1 lần
Không có hai chữ số liên tiếp nào trong K có hiệu bằng 1. 
Hãy liệt kê tất cả các số thỏa mãn theo thứ tự tăng dần.

Input

Dòng đầu ghi số bộ test (không quá 10)
Mỗi bộ test là 1 số nguyên dương N (2 < N < 10)
Output

Liệt kê tất cả các số thỏa mãn, mỗi số trên một dòng.

Sau mỗi test in ra một khoảng trống.

Ví dụ

Input
2

3

4
Output
2413

3142

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int m,n;
bool check[10];
int a[10];
void out(){
    For(i,0,n){
        if(a[i]==0) return;
        if(abs(a[i]-a[i+1])==1&&i<n-1) return;
    }
    For(i,0,n) cout<<a[i];
    cout<<endl;
}
void Try(int i){
    if(i==n){
        out();
        return;
    }
    For(j,0,n){
        if(!check[j]){
            check[j]=true;
            a[i]=j+1;
            Try(i+1);
            check[j]=false;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        Try(0);
    }
}


