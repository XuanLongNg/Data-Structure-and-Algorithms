/*
Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy đưa ra 1 nếu X có mặt trong mảng A[], ngược lại đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n, X là số các phần tử của mảng A[] và số X cần tìm; dòng tiếp theo đưa vào n số A[i] (1≤i≤n) các số được viết cách nhau một vài khoảng trống.
T, n, A, X thỏa mãn ràng buộc: 1≤T≤100; 1≤N, X, A[i] ≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

2 
5 16
2 4 7 9 16
7 98
1 22 37 47 54 88 96

Output:
1
-1
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
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
bool binary_search(int *a,int n,int k){
    int l=0,r=n-1,mid;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return a[l]==k;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        For(i,0,n){
            cin>>a[i];
        }
        sort(a,a+n);
        if(binary_search(a,n,k)==1) cout<<"1";
        else cout<<"-1";
        cout<<endl;
    }
}
