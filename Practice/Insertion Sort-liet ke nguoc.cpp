/*
Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp chèn. Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).

Input

Dòng đầu ghi số n (1 < n < 100)

Dòng thứ 2 ghi n số của dãy A (các số đều nguyên dương và nhỏ hơn 100000)

Output

Ghi ra lần lượt các bước thuật toán theo thứ tự ngược (xem ví dụ mẫu để hiểu rõ hơn).

Ví dụ

Input

6

5 8 3 9 1 4

Output
Buoc 5: 1 3 4 5 8 9

Buoc 4: 1 3 5 8 9

Buoc 3: 3 5 8 9

Buoc 2: 3 5 8

Buoc 1: 5 8

Buoc 0: 5
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
int ai=0;
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
    ai=0;
}
void Insertion_Sort(int *a,int n){
    int b[n],k=1;
    b[0]=a[0];
    add(b,1);
    ai++;
    int position,value;
    For(i,1,n){
        position=i;
        value=a[i];
        while(position>0&&a[position-1]>value){
            a[position]=a[position-1];
            b[position]=b[position-1];
            position--;
        }
        b[position]=value;
        a[position]=value;
        add(b,i+1);
        ai++;
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    Insertion_Sort(a,n);
    display();
}