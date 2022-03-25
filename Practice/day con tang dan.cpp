/*
Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất tăng dần.

Dãy con tạo được bằng cách lấy ra các phần tử trong dãy a[] nhưng vẫn giữ nguyên thứ tự ban đầu.

Coi mỗi dãy con như một xâu ký tự với các phần tử cách nhau một khoảng trống, hãy liệt kê theo thứ tự từ điển.

Input

Dòng đầu ghi số n (không quá 20)
Dòng thứ 2 ghi n số của dãy a[]. Các số khác nhau từng đôi một và có giá trị không quá 100.
Output

Ghi ra lần lượt các dãy con tăng dần theo thứ tự từ điển.

Ví dụ

Input
4

6 3 7 11
Output
3 11

3 7

3 7 11

6 11

6 7

6 7 11

7 11

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
int n;
int a[20];
vector<string> h;
void out(string k){
    h.push_back(k);
}
void Try(string k,int i,int j,int l,int n1){
    if(i==n1){
        out(k);
        return;
    }
    For(x,l,n){
        if(a[x]>j){
            string k1=to_string(a[x]);
            Try(k+k1+" ",i+1,a[x],x,n1); 
        }
        
    }
}
int main(){
    string k1,k;
    cin>>n;
    For(i,0,n) cin>>a[i];
    h.push_back(k);
    int i=2;
    while(i<n){
        Try(k,0,0,0,i);
        i++;
    }
    sort(h.begin(),h.end());
    For(i,0,h.size()) cout<<h[i]<<endl;
}