/*
Cho ma trận A[M][N]. Nhiệm vụ của bạn hãy tìm số bước đi ít nhất dịch chuyển từ vị trí A[1][1] đến vị trí A[M][N]. Biết mỗi bước đi ta chỉ được phép dịch chuyển đến vị trí A[i][j+A[i][j]] hoặc vị trí A[i+A[i][j]][j] bên trong ma trận.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N; phần thứ hai là các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.
T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤M, N, A[i][j]≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng. In ra -1 nếu không tìm được đáp án.
Ví dụ:

Input

1

3  3

2  1  2

1  1  1

1  1  1
Output
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
int Min;
void out(int count){
    if(count<Min){
        Min=count;
    }
}
void check(std::vector<int> a[1000],int n,int m,int count,int i,int j){
    For(x,0,2){
        if(i==n-1&&j==m-1) out(count);
        else if(x==0&&i+a[i][j]<n) check(a,n,m,count+1,i+a[i][j],j);
        else if(x==1&&j+a[i][j]<m) check(a,n,m,count+1,i,j+a[i][j]);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m;
        Min=n+m;
        vector<int> a[n];
        For(i,0,n)
        For(j,0,n){
            cin>>k;
            a[i].push_back(k);
        }
        check(a,n,m,0,0,0);
        if(Min==n+m) Min=-1;
        cout<<Min<<endl;
        Min=1e9;
    }
}

