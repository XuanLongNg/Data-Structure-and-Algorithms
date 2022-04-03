/*
Cho một dãy số nguyên gồm N phần tử A[1], A[2], ... A[N]. 

Biết rằng dãy con tăng là 1 dãy A[i1],... A[ik]

thỏa mãn i1 < i2 < ... < ik và A[i1] < A[i2] < .. < A[ik].

Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử? 

Input: Dòng 1 gồm 1 số nguyên là số N (1 ≤ N ≤ 1000). Dòng thứ 2 ghi N số nguyên A[1], A[2], .. A[N] (1 ≤ A[i] ≤ 1000). 

Output: Ghi ra độ dài của dãy con tăng dài nhất.

Ví dụ:

Input
6

1 2 5 4 6 2
Output

4
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
int main(){
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    vector<int> F;
    F.resize(n+1,0);
    int k=1;
    F[0]=0;
    For(i,1,n+1){
        F[i]=1;
        for(int j=i-1;j>=1;j--)
        if(a[j-1]<a[i-1]){
            F[i]=max(F[i],F[j]+1);
        }
        k=max(F[i],k);
    }
    cout<<k<<endl;
}