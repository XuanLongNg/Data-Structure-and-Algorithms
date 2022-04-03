/*
Cho hai mảng đã được sắp xếp A[], B[] gồm M, N phần tử theo thứ tự và số K. Nhiệm vụ của bạn là tìm phần tử ở vị trí số K sau khi trộn hai mảng để nhận được một mảng được sắp xếp.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số M, N, K; dòng tiếp theo đưa vào M số của mảng A[];dòng tiếp theo đưa vào N số của mảng B[];các số được viết cách nhau một vài khoảng trống.
T, M,N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N, A[i], B[i]≤106; 1≤ K≤N+M.
Output:

Đưa ra giá trị phần tử thứ K của mỗi test theo từng dòng.
   Ví dụ:

Input
1
5 4 5
2 3 6 7 9
1 4 8 10
Output
6

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
int main(){
    int t; cin>>t;
    while(t--){
        vector<int>a;
        int n,m,k,h; cin>>n>>m>>k;
        For(i,0,n+m){
            cin>>h;
            a.push_back(h);
        }
        sort(a.begin(),a.end());
        cout<<a[k-1]<<endl;
        a.clear();
    }
}