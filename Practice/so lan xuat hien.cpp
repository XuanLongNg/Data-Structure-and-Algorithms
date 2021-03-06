/*
Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy tìm số lần xuất hiện số X trong mảng. Nếu số lần xuất hiện số x trong mảng là 0 hãy đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N và X; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
T, N, X, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤103, 1≤A[i], X ≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

Input:

2
7 2

1 1 2 2 2 2 3

7 4

1 1 2 2 2 2 3

Output:
4

-1
*/
#include <iostream>
#include <algorithm>
#include <map>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,k,x; cin>>n>>k;
        map <int,int>a;
        For(i,0,n){
            cin>>x;
            a[x]++;
        }
        x=-1;
        map<int, int>::iterator it;
        for(it=a.begin();it!=a.end();it++)
        if(it->first==k){
            cout<<it->second<<endl;
            x=1;
        }
        if(x==-1) cout<<x<<endl;
    }
}