/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy tìm đường đi từ đỉnh sÎV đến đỉnh tÎV trên đồ thị bằng thuật toán BFS.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào bốn số |V|, |E|, sÎV, tÎV tương ứng với số đỉnh, số cạnh,  đỉnh u, đỉnh v; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra đường đi từ đỉnh s đến đỉnh t của mỗi test theo thuật toán BFS của mỗi test theo khuôn dạng của ví dụ dưới đây. Nếu không có đáp án, in ra -1.
     Ví dụ:

Input:
1

6 9 1 6

1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
Output:
1 2 5 6
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
bool check[10000],ans;
int dinh, canh, truoc[1000];
void Set(){
    dscanh.clear();
    For(i,0,1000) dske[i].clear();
    memset(check,0,10000);
    memset(truoc,0,1000);
    ans=0;
}
void disdske(){
    For(i,1,dinh+1){
        cout<<i<<" : ";
        For(j,0,dske[i].size()) cout<<dske[i][j]<<" ";
        cout<<endl;
    }
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
        dske[dc].push_back(dd);
    }
}
void BFS(int dd){
    queue<int> Queue;
    Queue.push(dd);
    check[dd]=true;
    while(!Queue.empty()){
        int h=Queue.front();
        Queue.pop();
        For(i,0,dske[h].size()){
            int v=dske[h][i];
            if(!check[v]){
                check[v]=true;
                Queue.push(v);
                truoc[v]=h;
            }
        }
    }
}
int main(){
    faster();
    test(){
        Set();
        int dd,dc,DD,DC; 
        cin>>dinh>>canh>>DD>>DC;
        For(i,0,canh){
            cin>>dd>>dc;
            dscanh.push_back(pair<int,int>(dd,dc));
        }
        convert();
        BFS(DD);
        stack<int> ansof;
        while(1){
            ansof.push(DC);
            if(DC==DD){
                ans=1;
                break;
            }
            if(truoc[DC]==0) break;
            DC=truoc[DC];
        }
        if(!ans) cout<<"-1";
        else{
            while(!ansof.empty()){
                cout<<ansof.top()<<" ";
                ansof.pop();
            }
        }
        cout<<endl;
    }
}



