/*
Cho đồ thị vô hướng có N đỉnh và M cạnh. Có Q truy vấn, mỗi truy vấn yêu cầu trả lời câu hỏi giữa 2 đỉnh x và y có tồn tại đường đi tới nhau hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm 2 số nguyên N, M (1 ≤ N, M ≤ 1000).
M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v cho biết có cạnh nối giữa đỉnh u và v.
Dòng tiếp là số lượng truy vấn Q (1 ≤ Q ≤ 1000).
Q dòng tiếp theo, mỗi dòng gồm 2 số nguyên x và y.
Output:  Với mỗi truy vấn, in ra “YES” nếu có đường đi từ x tới y, in ra “NO” nếu ngược lại.

Ví dụ:

Input:
1

6 5

1 2

2 3

3 4

1 4

5 6

2

1 5

2 4
Output
NO

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
int dinh, canh;
void Set(){
    dscanh.clear();
    For(i,0,1000) dske[i].clear();
    memset(check,0,10000);
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
        dske[dc].push_back(dd);
    }
}
void BFS(int dd,int dc){
    memset(check,0,10000);
    queue<int> ans;
    check[dd]=true;
    ans.push(dd);
    while(!ans.empty()){
        int h=ans.front();
        ans.pop();
        check[h]=1;
        if(h==dc){
            cout<<"YES\n";
            return;
        }
        For(i,0,dske[h].size()){
            int v=dske[h][i];
            if(!check[v]){
                check[v]=true;
                ans.push(v); 
            }
        }
    }
    cout<<"NO\n";
}
int main(){
    faster();
    test(){
        Set();
        cin>>dinh>>canh;
        int q,dd,dc; 
        For(i,0,canh){
            cin>>dd>>dc;
            dscanh.push_back(pair<int,int>(dd,dc));
        }
        convert();
        cin>>q;
        For(i,0,q){
            cin>>dd>>dc;
            BFS(dd,dc);
        }
    }
}
