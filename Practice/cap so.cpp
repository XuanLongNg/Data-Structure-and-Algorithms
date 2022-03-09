/*
Cho dãy số nguyên A có n phần tử.

Hãy đếm xem có bao nhiêu cặp (i,j) thỏa mãn:

i < j
A[i] > A[j] và đều là số chẵn
Tồn tại chỉ số k với i < k < j sao cho A[k] là số lẻ
Input

Dòng đầu tiên ghi số n (1 ≤ n ≤ 105).

Output

Dòng thứ 2 ghi n số của dãy A, các giá trị A[i] không vượt quá 106.

Ví dụ

Input

5

4 3 2 5 1
Output
1
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
int binary_search(int *a,int l,int r,int k){
    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return a[l];
}
void check(int *a,int n){
    int count=0;
    For(i,0,n-2){
        if(a[i]%2==0){
            For(j,i+1,n-1){
                j=binary_search(a,i+1,n,i+1);
            }
        }
    }
    cout<<count<<endl;
}   
int main(){
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    check(a,n);
}