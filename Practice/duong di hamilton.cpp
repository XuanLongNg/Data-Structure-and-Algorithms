/*
Đường đi đơn trên đồ thị có hướng hoặc vô hướng đi qua tất cả các đỉnh của đồ thị mỗi đỉnh đúng một lần được gọi là đường đi Hamilton. Cho đồ thị vô hướng G = <V, E>, hãy kiểm tra xem đồ thị có đường đi Hamilton hay không?

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào hai số V, E tương ứng với số đỉnh, số cạnh của đồ thị; phần thứ hai đưa vào các cạnh của đồ thị.
T, V, E thỏa mãn ràng buộc: 1≤T ≤100; 1≤V≤10; 1≤ E ≤15.
Output:

Đưa ra 1 hoặc 0 tương ứng với test có hoặc không có đường đi Hamilton theo từng dòng.
           Ví dụ:

Input
2
4 4
1 2 2 3 3 4 2 4
4 3
1 2 2 3 2 4
Output
1

0

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
const int nMax=1000006;
vi dske[1000];
vector<pair<int,int>> dscanh;
bool check[10000];
int dinh, canh;
void Set(){
    dscanh.clear();
    For(i,0,1000) dske[i].clear();
    memset(check,0,10000);
}
void DFS(int u){
    int v;
    check[u]=1;
    For(i,0,dske[u].size()){
        v=dske[u][i];
        if(!check[v]){
            DFS(v);
        }
    }
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
        dske[dc].push_back(dd);
    }
}
bool checkdinh(){
    For(i,1,dinh+1)
    if(!check[i]) return 1;
    return 0;
}
void Count(){
    For(i,1,dinh+1){
        memset(check,0,10000);
        check[i]=true;
        DFS(i==1?2:1);
        if(checkdinh()) cout<<i<<" ";

    }
}
int main(){
    faster();
    test(){
        Set();
        int dd,dc; 
        cin>>dinh>>canh;
        For(i,0,canh){
            cin>>dd>>dc;
            dscanh.push_back(pair<int,int>(dd,dc));
        }
        convert();
        Count();
        cout<<endl;
    }
}


