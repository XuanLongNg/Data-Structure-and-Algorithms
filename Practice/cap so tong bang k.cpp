/*
Cho mảng A[] gồm n phần tử và số k. Đếm tất cả các cặp phần tử của mảng có tổng bằng k. Ví dụ A[] = {1, 5, 3, 4, 2 }, k = 7 ta có kết quả là 2 cặp (3, 4), (5, 2).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[] và k; dòng tiếp theo là n số A[i] của mảng A[]các số được viết cách nhau một vài khoảng trống.
T, n, k, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤100; 0≤ k ≤100, 0≤ A[i] ≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

Input:

2
5 9 
1 5 4 1 2
3 2

1 1 1

Output:
1
3
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
int binary_search(int *a,int l,int r,int k){
    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    if(a[l]==k) return l;
    return -1;
}
void Count(int *a,int n,int k,int &count){
    For(i,0,n){
        int j=i+1;
        while(binary_search(a,j,n-1,k-a[i])!=-1&&j<n){
            count++;
        
            j=binary_search(a,j,n-1,k-a[i])+1;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,count=0,k; cin>>n>>k;
        int a[n];
        For(i,0,n) cin>>a[i];
        sort(a,a+n);
        Count(a,n,k,count);
        cout<<count<<endl;
    }
}