/*
Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp nổi bọt. Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).

Chú ý: thuật toán sắp xếp nổi bọt có thể kết thúc khi tất cả dãy đã sắp xếp, không còn cặp số cạnh nhau nào sai thứ tự.

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

4 1 3 9 8 5

Output
Buoc 2: 1 3 4 5 8 9

Buoc 1: 1 3 4 8 5 9
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
void Bubble_Sort(int *a,int n){ 
    Fori(i,1,n){
        int h=0;
        For(j,0,i)
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            h=1;
        }
        if(h==0) break;
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
        Bubble_Sort(a,n);
        display();
    }
}
