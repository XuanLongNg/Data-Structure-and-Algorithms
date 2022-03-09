/*
Cho dãy số A[] gồm có N phần tử và số nguyên K.

Với mỗi dãy con liên tiếp có độ dài bằng K (từ trái sang phải), bạn hãy in ra phần tử lớn nhất trong dãy con này.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 1 ≤ K ≤ N).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 109).

Output: 

Với mỗi test, in ra trên một dòng N-K+1 số nguyên là đáp án tìm được.

Ví dụ:

Input

2

9 3

1 2 3 1 4 5 2 3 6

10 4

8 5 10 7 9 4 15 12 90 13

Output
3 3 4 5 5 5 6

10 10 10 15 15 90 90
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int find_max(int *a,int l,int r){
    int max=0;
    For(i,l,r)
    if(a[i]>max) max=a[i];
    return max;
}
void display(int *a,int n,int k){
    For(i,0,n-k+1){
        cout<<find_max(a,i,i+k)<<" ";
    }
    cout<<endl;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        For(i,0,n) cin>>a[i];
        display(a,n,k);
    }
}