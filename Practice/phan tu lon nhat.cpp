/*
Cho mảng A[] gồm n phần tử, hãy tìm k phần tử lớn nhất của mảng. Các phần tử được đưa ra theo thứ tự giảm dần.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N và K; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
T, N, K, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤K < N ≤103, 1≤A[i] ≤106.
Output:

Đưa ra k phần tử lớn nhất trên một dòng.

Input:

2
5 3

10 7 9 12 6

6 2

9 7 12 8 6 5

Output:
12 10 9

12 9
*/
#include <iostream>
#include <algorithm>
#include <map>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
void Find(int *a,int n,int &k){
    int min=a[0]+a[1];
    For(i,0,n-1){
        For(j,i+1,n) if(abs(a[i]+a[j])<abs(min)) min=a[i]+a[j];
    }
    k=min;
}
bool comp(int a,int b){
    return a>b;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        For(i,0,n) cin>>a[i];
        sort(a,a+n,comp);
        display(a,k);
    }
}
