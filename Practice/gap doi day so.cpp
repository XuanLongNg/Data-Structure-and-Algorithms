/*
Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:

Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.

Ví dụ với 2 bước biến đổi, ta có [1] - [1 2 1] - [1 2 1 3 1 2 1].

Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2N - 1).

Output: 

Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:

Input

Output

2

3 2

4 8
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
ll X[50];
ll so[50];
ll Try(ll n,ll k){
    if(k-1==so[n-1]) return n;
    else if(k-1<so[n-1]) return Try(n-1,k);
    else return Try(n-1,k-1-so[n-1]);
}
int main(){
    int t; cin>>t;
    X[0]=1;
    so[0]=0;
    For(i,1,50){
        X[i]=X[i-1]*2+1;
        so[i]=X[i-1];
    }
    while(t--){
        ll n,k; cin>>n>>k;
        cout<<Try(n,k)<<endl;
    }
}
