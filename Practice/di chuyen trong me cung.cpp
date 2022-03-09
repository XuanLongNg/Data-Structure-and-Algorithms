/*
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
Hãy đưa ra một hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

                        https://www.geeksforgeeks.org/wp-content/uploads/ratinmaze_filled_path1.png

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤10; 0≤A[i][j] ≤1.
Output:

Đưa ra tất cả đường đi của con chuột trong mê cung theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.
Input

2

4

1  0  0  0

1  1  0  1 

0  1  0  0 

1  1  1  1

5

1 0 0 0 0

1 1 1 1 1

1 1 0 0 1

0 1 1 1 1

0 0 0 1 1

Output
DRDDRR

DDRDRRDR DDRDRRRD DRDDRRDR DRDDRRRD DRRRRDDD
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
int M=-1;
int n;
string k;
std::vector<int> a[1000];
void printK(){
    M=1;
    cout<<k;
    cout<<" ";
}
void check(int i,int j,int h){
    if(i==n-1&&j==n-1){
        printK();
        return;
    }
    if(i==n||j==n||!a[i][j]) return;
    k[h]='D';
    check(i+1,j,h+1);
    k[h]='R';
    check(i,j+1,h+1);
}
int main(){
    int t; cin>>t;
    while(t--){
        int m;
        cin>>n;
        For(i,0,2*n-2) k+=" ";
        For(i,0,n)
        For(j,0,n){
            cin>>m;
            a[i].push_back(m);
        }
        check(0,0,0);
        if(M==-1) cout<<M;
        cout<<endl;
        M=-1;
        k="";
        For(i,0,n) a[i].clear();
    }
}
