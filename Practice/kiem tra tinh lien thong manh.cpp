/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có liên thông mạnh hay không?

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra “YES”, hoặc “NO” theo từng dòng tương ứng với test là liên thông mạnh hoặc không liên thông mạnh.
      Ví dụ:

Input:
1

6 9 

1 2 2 4 3 1 3 2 3 5 4 3 5 4 5 6 6  3
Output:

YES
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
int dinh, canh, truoc[1000];
void Set(){
    dscanh.clear();
    For(i,0,1000) dske[i].clear();
    memset(check,0,10000);
    memset(truoc,0,1000);
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
    }
}
void DFS(int u,int &ans){
    int v;
    check[u]=1;
    ans++;
    For(i,0,dske[u].size()){
        v=dske[u][i];
        if(!check[v]){
            DFS(v,ans);
        }
    }
}
int Count(){
    For(i,1,dinh+1){
        int ans=0;
        DFS(i,ans);
        memset(check,0,10000);
        if(ans!=dinh){
           return 0; 
        }
    }
    return 1;
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
        if(Count()==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}