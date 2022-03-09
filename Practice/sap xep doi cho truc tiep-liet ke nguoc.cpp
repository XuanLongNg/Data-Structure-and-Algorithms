/*
Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp đổi chỗ trực tiếp. Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).

Input

Dòng đầu ghi số bộ test (không quá 10). Mỗi test gồm 2 dòng:

Dòng đầu ghi số n (1 < n < 100)
Dòng thứ 2 ghi n số của dãy A (các số đều nguyên dương và nhỏ hơn 1000)
Output

Ghi ra lần lượt các bước thuật toán theo thứ tự ngược (xem ví dụ mẫu để hiểu rõ hơn).

Ví dụ

Input

1

6

5 8 3 9 1 4

Output

Buoc 5: 1 3 4 5 8 9

Buoc 4: 1 3 4 5 9 8

Buoc 3: 1 3 4 9 8 5

Buoc 2: 1 3 8 9 5 4

Buoc 1: 1 8 5 9 3 4
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
vector<string> check;
int ai=1;
void add(int *a,int n){
    string k;
    k+="Buoc ";
    k+=to_string(ai);
    k+=": ";
    For(i,0,n){
        k+=to_string(a[i]);
        k+=" ";
    }
    check.push_back(k);
}
void display(){
    Fori(i,0,check.size()) cout<<check[i]<<endl;
    check.clear();
    ai=1;
}
void Sort(int *a,int n){
    For(i,0,n-1){
        For(j,i+1,n)
        if(a[j]<a[i]) swap(a[i],a[j]);
        add(a,n);
        ai++;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        For(i,0,n) cin>>a[i];
        Sort(a,n);
        display();
    }
    
}