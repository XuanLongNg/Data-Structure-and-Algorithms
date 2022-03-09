/*
Cho dãy số A[] có N phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các hoán vị của dãy số A[] theo thứ tự tăng dần, tức là hoán vị đầu tiên có giá trị tăng dần từ trái qua phải, hoán vị cuối cùng giảm dần từ trái qua phải.

Input

Dòng đầu ghi số N (1 < N < 9)

Dòng thứ 2 ghi N số của dãy A[] (0 < A[i] < 10000)

Output

Ghi mỗi hoán vị của dãy số trên một dòng

Ví dụ

Input
3

88 77 99
Output
77 88 99

77 99 88

88 77 99

88 99 77

99 77 88

99 88 77

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
int M=-1;
vector<int> a;
vector<int>out;
int n,k;
bool check[10001];
void display(){
    For(i,0,out.size()) cout<<out[i]<<" ";
    cout<<endl;
}
void Try(int i){
    For(j,0,a.size()){
        if(check[j]==false){
            out[i]=a[j];
            check[j]=true;
            if(i==n-1) display();
            else Try(i+1);
            check[j]=false;
        }
    }
}
int main(){
    cin>>n;
    out.resize(n);
    For(i,0,n){
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    Try(0);
}