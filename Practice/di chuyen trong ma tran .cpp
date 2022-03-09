/*
Cho ma trận A[M][N]. Nhiệm vụ của bạn là đếm tất cả các đường đi từ phần tử A[0][0] đến phần tử A[M-1][N-1]. Bạn chỉ được phép dịch chuyển xuống dưới hoặc sang phải phần tử liền kề với vị trí hiện tại.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N tương ứng với số hàng và số cột của ma trận; dòng tiếp theo đưa vào các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.
T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 1≤M, N, A[i][j]≤100.
Output:

Đưa ra số cách di chuyển của mỗi test theo từng dòng.
Giải thích test 1: Có 3 cách di chuyển là [1 4 5 6], [1 2 5 6] và [1 2 3 6].
 

Input
2
2  3

1  2  3 

4  5  6
2  2

1  2 

3  4
Output
3

2
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
int m,n;
int total=0;
void check(int i,int j){
    if(i==m-1&&j==n-1) total++;
    if(i==m||j==n) return;
    check(i+1,j);
    check(i,j+1);
}
int main(){
    int t; cin>>t;
    while(t--){
        int k;
        cin>>n>>m;
        vector<int> a[100];
        For(i,0,m)
        For(j,0,n){
            cin>>k;
            a[i].push_back(k);
        }
        check(0,0);
        cout<<total<<endl;
        total=0;
    }
}


