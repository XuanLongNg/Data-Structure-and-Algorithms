/*
Cho mảng A[] gồm N phần tử chỉ bao gồm các số 0 và 1. Các số 0 được đặt trước các số 1. Hãy đếm các số 0 với thời gian log(N).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số N; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤1000; 0≤ A[i]≤1.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
  Ví dụ:

Input
3
12
0 0 0 0 0 0 0 0 0 1 1 1 
5
0 0 0 0 0
6
1 1 1 1 1 1
Output
9
5
0

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int binary_search(int *a,int d,int c,int k){
    int mid;
    while(d<c){
        mid=(d+c)/2;
        if(a[mid]>=k) c=mid;
        else d=mid+1;
    }
    if(a[d]==k) return d;
    return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n;
        int a[n];
        For(i,0,n) cin>>a[i]; 
        k=binary_search(a,0,n-1,1);
        if(k==-1) cout<<n;
        else cout<<k;
        cout<<endl;
    }
}
