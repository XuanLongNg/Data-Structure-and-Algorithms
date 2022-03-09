/*
Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤20; 0≤A[i]≤9.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví  dụ:

Input
2
6
6 8 4 5 2 3
5
5 3 0 7 4
Output
604
82
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
void process(){
    ll n,x; cin>>n;
    vector<ll> a;
    For(i,0,n){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    ll min=0,max=0;
    For(i,0,n){
        if(i%2==0) min=min*10+a[i];
        else max=max*10+a[i];
    }
    cout<<min+max<<endl;
}
int main(){
    int t; cin>>t;
    while(t--)
    process();
}


