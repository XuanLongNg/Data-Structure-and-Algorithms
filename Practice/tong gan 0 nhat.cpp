/*
Cho mảng A[] gồm n phần tử, hãy tìm cặp phần tử có tổng gần nhất so với 0.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[]; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 2≤N ≤103, -106≤A[i] ≤106.
Output:

Đưa ra tổng gần nhất với 0 của cặp phần tử.
Input:

2
3
-8 -66 -60

6
-21 -67 -37 -18 4 -65 

Output:
-68
-14
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
void Find(long *a,long n,long &k){
    long min=a[0]+a[1];
    For(i,0,n-1){
        For(j,i+1,n)
        if(abs(a[i]+a[j])<abs(min)){
			min=a[i]+a[j];
		}
    }
    k=min;
}
int main(){
    int t; cin>>t;
    while(t--){
        long n,k; cin>>n;
        long a[n];
        For(i,0,n) cin>>a[i];
        Find(a,n,k);
        cout<<k<<endl;
    }
}