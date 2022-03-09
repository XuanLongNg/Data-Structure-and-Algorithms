/*
Hãy thực hiện thuật toán sắp xếp chèn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

Dữ liệu vào: Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

Kết quả: Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

Ví dụ:

Input

4

5 7 3 2

Output
Buoc 0: 5

Buoc 1: 5 7

Buoc 2: 3 5 7

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
int ai=0;
void display(int *a,int n){
    cout<<"Buoc "<<ai<<": ";
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
void Insertion_Sort(int *a,int n){
    int b[n],k=1;
    b[0]=a[0];
    display(b,1);
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
        display(b,i+1);
        ai++;
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    Insertion_Sort(a,n);
}