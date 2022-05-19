/*
Đồ thị hai phía là một đồ thị đặc biệt, trong đó tập các đỉnh có thể được chia thành hai tập không giao nhau thỏa mãn điều kiện không có cạnh nối hai đỉnh bất kỳ thuộc cùng một tập. Cho đồ thị N đỉnh và M cạnh, bạn hãy kiểm tra đồ thị đã cho có phải là một đồ thị hai phía hay không?



Input:

Dòng đầu tiên là số lượng bộ test T (T ≤  20).
Mỗi test bắt đầu bởi số nguyên N và M (1 ≤  N, M ≤  1000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Output: 

Với mỗi test, in ra “YES” nếu đồ thị đã cho là một đồ thị hai phía, in ra “NO” trong trường hợp ngược lại.
Ví dụ:

Input:
2

5 4

1 5

1 3

2 3

4 5

3 3

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
const int nMax=1000006;
vi dske[1001];
vector<pair<int,int>> dscanh;
int dinh, canh;
int maudinh[1001];
bool ans;
vector<pair<int,int>> V;
void Set(){
    ans=0;
    dscanh.clear();
    For(i,0,1001)
        dske[i].clear();
    V.clear();
    memset(maudinh,0,sizeof(maudinh));
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
        dske[dc].push_back(dd);
    }
}
void color(int i,int j){
    if(ans) return;
    if(i==dinh){
        ans=1;
        return;
    }
    for(auto u: dske[V[i].first]){
        if(maudinh[u]==j) return;
    }
    maudinh[V[i].first]=j;
    color(i+1,1);
    color(i+1,2);
}
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
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
        For(i,1,dinh+1){
            V.push_back(make_pair(i,dske[i].size()));
        }
        sort(V.begin(),V.end(),comp);
        color(0,1);
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}