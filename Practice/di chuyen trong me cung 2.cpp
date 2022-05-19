/*
Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.
Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤8; 0≤A[i][j] ≤1.
Output:

Đưa ra các xâu ký tự được sắp xếp, trong đó mỗi xâu là một đường đi của con chuột trong mê cung. In ra đáp án theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.
Input



3
4
1 0 0 0

1 1 0 1

0 1 0 0

0 1 1 1
4
1 0 0 0

1 1 0 1

1 1 0 0

0 1 1 1

5

1 0 0 0 0

1 1 1 1 1

1 1 1 0 1

0 0 0 0 1

0 0 0 0 1
Output
DRDDRR

DDRDRR DRDDRR

DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD

 
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
int n;
vec(vi) matrix;
bool ans1=0;
map<pair<int,int>,bool> check;
void Try(int i,int j,string ans){
    if(i==n-1&&j==n-1&&matrix[i][j]==1){
        ans1=1;
        cout<<ans<<" ";
        return;
    }
    if(i>=n||j>=n) return;
    if(matrix[i][j]!=1) return;
    if(!check[make_pair(i+1,j)]){
        check[make_pair(i+1,j)]=true;
        Try(i+1,j,ans+"D");
        check[make_pair(i+1,j)]=false;
    }
    if(!check[make_pair(i,j-1)]&&i>0&&j>0){
        check[make_pair(i,j-1)]=true;
        Try(i,j-1,ans+"L");
        check[make_pair(i,j-1)]=false;
    }
    if(!check[make_pair(i,j+1)]){
        check[make_pair(i,j+1)]=true;
        Try(i,j+1,ans+"R");
        check[make_pair(i,j+1)]=false;
    }
    
    if(!check[make_pair(i-1,j)]&&i>0&&j>0){
        check[make_pair(i-1,j)]=true;
        Try(i-1,j,ans+"U");
        check[make_pair(i-1,j)]=false;
    }
}
int main(){
    faster();
    test(){
        cin>>n;
        matrix.clear();
        check.clear();
        ans1=0;
        For(i,0,n){
            vi ma;
            For(j,0,n){
                int h; cin>>h;
                ma.push_back(h);
            }
            matrix.push_back(ma);
        }
        check[make_pair(0,0)]=1;
        Try(0,0,"");
        if(!ans1) cout<<"-1";
        cout<<endl;
    }
}

