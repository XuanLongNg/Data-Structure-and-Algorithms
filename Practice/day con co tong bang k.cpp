/*
Cho dãy số A[] = (a1, a2, .., an) và số tự nhiên K. Hãy đưa ra tất cả các dãy con của dãy số A[] sao cho tổng các phần tử của dãy con đó đúng bằng K. Các phần tử của dãy số A[] được giả thuyết là nguyên dương và không có các phần tử giống nhau. Ví dụ với dãy con A[] = {5, 10, 15, 20, 25}, K = 50 ta có 3 dãy con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A[] và số K; dòng tiếp theo đưa vào N phần tử của dãy số A[].
T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤10; 1≤ K, A[i] ≤100.
Output:

Đưa ra tất cả các dãy con của dãy số A[] thỏa mãn yêu cầu bài toán theo thứ tự từ điển, trong đó mỗi dãy con được bao bởi các ký tự [, ]. Nếu không có dãy con nào thỏa mãn yêu cầu bài toán, hãy đưa ra -1.
Input
2
5 50

5  10 15 20  25
8  53
15  22  14  26  32  9  16  8
Output

[5 10 15 20] [5 20 25] [10 15 25]
[8 9 14 22] [8 14 15 16] [15 16 22]

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
int out[10];
int n,k,l=-1;
int a[10];
bool check[10001];
void display(int h){
    l=1;
    cout<<"[";
    For(i,0,h-1) cout<<out[i]<<" ";
    cout<<out[h-1]<<"] ";
}
void Try(int h,int i,int total){
    if(total>k||i>=n) return;
    else if(total==k){
        display(i);
        return;
    }
    For(j,h,n){
        out[i]=a[j];
        total+=out[i];
        Try(j+1,i+1,total);
        total-=a[j];
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        For(i,0,n) cin>>a[i];
        sort(a,a+n);
        Try(0,0,0);
        if(l==-1) cout<<l;
        l=-1;
        cout<<endl;
    } 
}
