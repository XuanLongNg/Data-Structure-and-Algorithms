/*
Cho mảng A[] gồm N phần tử.Nhiệm vụ của bạn là tìm max = Tổng các phần tử nhân với vị trí trong mảng bằng cách sắp đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 109+7.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N, A[i] ≤107.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
5
5 3 2 4 1
3
1 2 3
Output
40
8
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
    ll n,k; cin>>n;
    vector<ll> a;
    For(i,0,n){
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    ll total=0;
    For(i,0,n){
        total+=a[i]%Mod*i%Mod;
        total%=Mod;
    }
    cout<<total<<endl;
}
int main(){
    int t; cin>>t;
    while(t--)
    process();
}


