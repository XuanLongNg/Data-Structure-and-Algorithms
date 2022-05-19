/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có tồn tại chu trình hay không?

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; Dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra YES hoặc “NO” kết quả test theo từng dòng tương ứng với đồ thị tồn tại hoặc không tồn tại chu trình.
      Ví dụ:

Input:
1

6  9

1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
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
int dinh,canh;
vector<pair<int,int>> dscanh;
vi dske[1001];
int check[1001];
bool ans=0;
void Set(){
    ans=0;
    dscanh.clear();
    For(i,0,1001) dske[i].clear();
    memset(check,0,sizeof(check));
}
void convert(){
    For(i,0,canh){
        dske[dscanh[i].first].push_back(dscanh[i].second);
    }
}
void DFS(int u,int k) {
    check[u] = 1;
    for(auto i:dske[u])
        if (check[i] == 0) DFS(i,u);
        else if (check[i] == 1&&i!=k) ans = 1;
    check[u] = 2;
}
int main(){
    faster();
    test(){
        Set();
        cin>>dinh>>canh;
        For(i,0,canh){
            int dd,dc;
            cin>>dd>>dc;
            dscanh.push_back(pair<int,int>(dd,dc));
        }
        convert();
        For(i,1,dinh+1){
            memset(check,0,sizeof(check));
            DFS(i,0);
            if(ans) break;
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

