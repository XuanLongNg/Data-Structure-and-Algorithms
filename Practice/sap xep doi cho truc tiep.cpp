/*
Hãy thực hiện thuật toán sắp xếp đổi chỗ trực tiếp trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

Ví dụ:

Input

4

5 7 3 2

Output
Buoc 1: 2 7 5 3

Buoc 2: 2 3 7 5

Buoc 3: 2 3 5 7
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
int ai=1;
void display(int *a,int n){
    cout<<"Buoc "<<ai<<": ";
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
void Sort(int *a,int n){
    For(i,0,n-1){
        For(j,i+1,n)
        if(a[j]<a[i]) swap(a[i],a[j]);
        display(a,n);
        ai++;
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    Sort(a,n);
}
