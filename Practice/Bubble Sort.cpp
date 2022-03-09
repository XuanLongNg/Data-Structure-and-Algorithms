/*
Hãy thực hiện thuật toán sắp xếp nổi bọt trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

Ví dụ:

Input

4

5 3 2 7

Output
Buoc 1: 3 2 5 7

Buoc 2: 2 3 5 7
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
int ai=1;
void display(int *a,int n){
    cout<<"Buoc "<<ai<<": ";
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
void Bubble_Sort(int *a,int n){ 
    Fori(i,1,n){
        int h=0;
        For(j,0,i)
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            h=1;
        }
        if(h==0) break;
        display(a,n);
        ai++;
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    Bubble_Sort(a,n);
}
