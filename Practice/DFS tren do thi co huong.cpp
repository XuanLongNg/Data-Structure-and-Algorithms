/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.
     Ví dụ:

Input:
1

6 9 5

1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 3
Output:
5 4 3 1 2 6
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
bool check[nMax];
vector<int> dske[nMax];
vector<int> dscanh[nMax];
void display(vector<int> k[nMax],int n){
    For(i,0,n){
        For(j,0,k[i].size()) cout<<k[i][j]<<" ";
        cout<<endl;
    }
}
void Set(){
    For(i,0,nMax) dske[i].clear();
    For(i,0,nMax) dscanh[i].clear();
    memset(check,false,nMax);
}
void chuyendscanhsangdske(int dinh,int canh){
    For(i,0,canh){
        dske[dscanh[i][0]].push_back(dscanh[i][1]);
    }
}
void DFS(int u){
    int v;
    cout<<u<<" ";
    check[u]=1;
    For(i,0,dske[u].size()){
        v=dske[u][i];
        if(!check[v]){
            DFS(v);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int dinh, canh, dd;
        cin>>dinh>>canh>>dd;
        Set();
        int dd1,dc;
        For(i,0,canh){
            cin>>dd1>>dc;
            dscanh[i].push_back(dd1);
            dscanh[i].push_back(dc);
        }
        chuyendscanhsangdske(dinh,canh);
        DFS(dd);
        cout<<endl;
        
    }
}

