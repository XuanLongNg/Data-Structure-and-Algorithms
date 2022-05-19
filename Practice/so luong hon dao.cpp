/*
Cho một bản đồ kích thước N x M được mô tả bằng ma trận A[][].A[i][j] = 1 có nghĩa vị trí (i, j) là nổi trên biển. 2 vị trí (i, j) và (x, y) được coi là liền nhau nếu như nó có chung đỉnh hoặc chung cạnh. Một hòn đảo là một tập hợp các điểm (i, j) mà A[i][j] = 1 và có thể di chuyển giữa hai điểm bất kì trong đó.

Nhiệm vụ của bạn là hãy đếm số lượng đảo xuất hiện trên bản đồ.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi 2 số nguyên N và M (1 ≤ N, M ≤ 500).

N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j].

Output:  Với mỗi test, in ra số lượng hòn đảo tìm được.

Ví dụ:

Input:



1

5 5

1 1 0 0 0

0 1 0 0 1

1 0 0 1 1

0 0 0 0 0

1 0 1 0 1

Output 

5
*/
#include <bits/stdc++.h>
#include <cstring>
#define faster()				    \
	ios_base::sync_with_stdio(0);	\
	cin.tie(NULL);  	     	    \
	cout.tie(NULL)
#define test()				\
	int test;				\
	cin>>test;				\
	while(test--)		
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define pb push_back
#define f first 
#define s second
#define ll long long
#define ld long double
#define ulli usignal long long int
#define lli unsigned long long int
#define vec(c) vector<c>
#define vi vector<int>
#define vll vector<long long>
#define rev(c) reverse(c.begin(),c.end())
#define pau system("pause");
#define Mod 1000000007
#define N 1000001
#define Ite ::iterator
using namespace std;
int n,m;
vec(vec(bool)) matrix;
bool check;
void OUT(){
    For(i,0,n){
        For(j,0,m) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}
void Try(int i,int j){
    if(i<0||j<0||i>=n||j>=m) return;
    if(!matrix[i][j]) return;
    matrix[i][j]=0;
    check=1;
    Try(i,j+1);
    Try(i,j-1);
    Try(i+1,j);
    Try(i-1,j);
    Try(i+1,j+1);
    Try(i+1,j-1);
    Try(i-1,j-1);
    Try(i-1,j+1);
}
void Set(){
    matrix.clear();
}
int main(){
    faster();
    test(){
        Set();
        cin>>n>>m;
        bool k;
        For(i,0,n){
            vec(bool) h;
            For(j,0,m){
                cin>>k;
                h.push_back(k);
            }
            matrix.push_back(h);
        }
        int ans=0;
        For(i,0,n){
            For(j,0,m){
                check=0;
                Try(i,j);
                ans+=check;
            }
        }
        cout<<ans<<endl;      
    }
}

