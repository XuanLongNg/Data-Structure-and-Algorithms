/*
Cho mảng A[] gồm N phần tử chưa được sắp xếp. Nhiệm vụ của bạn là sắp xếp các phần tử của mảng A[] theo thứ tự tăng dần bằng thuật toán Merge Sort.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N tương ứng với số phần tử của mảng A[]; phần thứ 2 là N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N, A[i]≤106.
Output:

Đưa ra kết quả các test theo từng dòng.
Input

2
5
4 1 3 9 7
10
10 9 8 7 6 5 4 3 2 1

Output
1 3 4 7 9
1 2 3 4 5 6 7 8 9 10
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
void Sort(int *a,int l,int m,int r){
    int n1,n2;
    n1=m-l+1;
    n2=r-m;
    int a1[n1],a2[n2];
    For(i,0,n1) a1[i]=a[l+i];
    For(i,0,n2) a2[i]=a[m+1+i];
    int i=0,j=0,k=l;
    while(i<n1&&j<n2){
        if(a1[i]<a2[j]){
            a[k]=a1[i];
            k++; i++;
        }
        else{
            a[k]=a2[j];
            k++; j++;
        }
    }
    while(i<n1){
        a[k]=a1[i];
        k++; i++;
    }
    while(j<n2){
        a[k]=a2[j];
        k++; j++;
    }
}
void Merge_Sort(int *a,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        Merge_Sort(a,l,mid);
        Merge_Sort(a,mid+1,r);
        Sort(a,l,mid,r);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        For(i,0,n) cin>>a[i];
        Merge_Sort(a,0,n-1);
        display(a,n);
    }
}