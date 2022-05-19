/*
Một đồ thị N đỉnh là một cây, nếu như nó có đúng N-1 cạnh và giữa 2 đỉnh bất kì, chỉ tồn tại duy nhất 1 đường đi giữa chúng.

Cho một đồ thị N đỉnh và N-1 cạnh, hãy kiểm tra đồ thị đã cho có phải là một cây hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test bắt đầu bởi số nguyên N (1 ≤ N ≤ 1000).
N-1 dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Output: 

Với mỗi test, in ra “YES” nếu đồ thị đã cho là một cây, in ra “NO” trong trường hợp ngược lại.
Ví dụ:


Input



2

4

1 2

1 3

2 4

4

1 2

1 3

2 3
Output
 

YES

NO
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
int check[1001],truoc[1001];
bool ans;
void Set(){
    dscanh.clear();
    For(i,0,1001) dske[i].clear();
    memset(check,0,sizeof(check));
}
void convert(){
    For(i,0,canh){
        dske[dscanh[i].first].push_back(dscanh[i].second);
        dske[dscanh[i].second].push_back(dscanh[i].first);
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
        cin>>dinh;
        canh=dinh-1;
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
        if(!ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

