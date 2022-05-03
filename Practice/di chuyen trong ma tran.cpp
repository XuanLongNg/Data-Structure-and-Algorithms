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
#define pii pair<int,int>
using namespace std;
int Min;
vector<int> a[1000];
int n, m;
map<pii,pii> truoc;
map<pii,bool> check;
void Set(){
    For(i,0,m){
        For(j,0,n){
            truoc[pii(i,j)] =pii(-1,-1);
            check[pii(i,j)] =0;
        }
        a[i].clear();
    }
    Min=n+m;
}
void Try(){
    queue<pii> ans;
    ans.push(pii(0,0));
    check[pii(0,0)]=1;
    truoc[pii(0,0)]=pii(-1,-1);
    while(!ans.empty()){
        pii h=ans.front();
        int k=a[h.first][h.second],i=h.first,j=h.second;
        ans.pop();
        if(!check[pii(i,j+k)]&&i<m&&j+k<n){
            ans.push(pii(i,j+k));
            check[pii(i,j+k)]=1;
            truoc[pii(i,j+k)]=pii(i,j);
        }
        if(!check[pii(i+k,j)]&&i+k<m&&j<n){
            ans.push(pii(i+k,j));
            check[pii(i+k,j)]=1;
            truoc[pii(i+k,j)]=pii(i,j);
        }
    }
}
int find(){
    int count=0;
    pii k(m-1,n-1);
    while(truoc[k]!=pii(-1,-1)){
        count++;
        k=truoc[k];
    }
    if(k!=pii(0,0)) count=Min+1;
    return Min<count?-1:count;
}
int main(){
    int t; cin>>t;
    while(t--){
        int k; cin>>n>>m;
        Set();
        For(i,0,m)
        For(j,0,n){
            cin>>k;
            a[i].push_back(k);
        }
        Try();
        cout<< find()<<endl;
    }
}

