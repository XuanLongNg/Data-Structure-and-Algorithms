/*
Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = AK với K là số nguyên cho trước. Sau đó, tính tổng các phần tử của cột cuối cùng. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 109+7.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 109) là kích thước của ma trận và số mũ.

Output: 

Với mỗi test, in ra kết quả của ma trận X.

Ví dụ:

Input:
2

2 5

1 1

1 0

3 1000000000

1 2 3

4 5 6

7 8 9
Output
8

581039956
Giải thích:

A^5 = 8 5

      5 3

Tổng các phần tử trên cột cuối cùng bằng 5+3 = 8.

               597240088 35500972 473761863

B^1000000000 = 781257150 154135232 527013321

               965274212 272769492 580264779

Tổng các phần tử trên cột cuối cùng là:

(473761863+527013321+580264779) % 1000000007 = 581039956
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
ll a[10][10];
ll b[10][10];
ll tinhtich(int i, int j,int n,int k){
    ll c=0;
    if(k==0) return b[i][j];
    if(k%2==0){
        For(i1,0,n) c+=tinhtich(i,i1,n,k/2)*b[i1][j]%Mod;
        return a[i][j]=c%Mod;
    }
    For(i1,0,n) c+=tinhtich(i,i1,n,k-1)*b[i1][j]%Mod;
    return a[i][j]=c%Mod;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,k,total=0; cin>>n>>k;
        For(i,0,n)
        For(j,0,n){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
        For(i,0,n){
            a[i][n-1]=tinhtich(i,n-1,n,k);
            total+=a[i][n-1]%Mod;
        }
        cout<<total<<endl;
    }
}