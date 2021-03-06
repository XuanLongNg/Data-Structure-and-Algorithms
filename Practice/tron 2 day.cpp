/*
Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là hợp nhất hai mảng A[] và B[] để được một mảng mới đã được sắp xếp. Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là C[] = {-1, 1, 0, 2, 3, 5, 6, 6, 7, .

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m tương ứng với số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A[i] ; dòng cuối cùng là m số B[i]; các số được viết cách nhau một vài khoảng trống.
T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤106; -108≤ A[i] ≤108.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

1

3 3

10 5 15

20 3 2

Output:
2 3 5 10 15 20
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
void display(ll *a,ll n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,m; cin>>n>>m;
        ll a[n+m],b[m];
        For(i,0,n+m) cin>>a[i];
        sort(a,a+n+m);
        display(a,n+m);
    }
}
