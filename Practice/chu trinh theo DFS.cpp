/*
Cho đồ thị vô hướng G= được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có chu trình từ đỉnh 1 hay không, nếu có, hãy in ra chu trình đầu tiên tìm thấy theo DFS.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số N, M  tương ứng với số đỉnh, số cạnh.
Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, N, M thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤103; 1≤ M ≤ N*(N-1)/2;
Output:

Đưa ra chu trình đầu tiên tìm thấy theo DFS từ đỉnh 1.
Nếu không có chu trình từ đỉnh 1, ghi ra NO
      Ví dụ:

Input:
1

6 9

1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
Output:

1 2 3 1
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
vi dske[1001];
bool check[1001],ans;
vector<pair<int,int>> dscanh;
int dinh, canh;
void Set(){
    ans=0;
    dscanh.clear();
    For(i,0,1001)
        dske[i].clear();
    memset(check,0,sizeof(check));
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
        dske[dc].push_back(dd);
    }
}
void DFS(int u,int s,string k,int total){
    if(ans) return;
    check[u]=1;
    for(auto i:dske[u])
    if(!check[i]) DFS(i,u,k+to_string(i)+" ",total+1);
    else if(i==1&&i!=s){
        cout<<k<<"1";
        ans=1;
        return;
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
        For(i,0,1001) sort(dske[i].begin(),dske[i].end());
        DFS(1,0,"1 ",0);
        if(!ans)
        cout<<"NO";
        cout<<endl;
    }
}