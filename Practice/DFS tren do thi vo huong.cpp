/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều sâu bắt đầu tại đỉnh uÎV (DFS(u)=?)

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa vào ba số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị, và u là đỉnh xuất phát; |E| dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các đỉnh được duyệt theo thuật toán DFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.
      Ví dụ:

Input:
1

6 9 5

1 2

1 3

2 3

2 4

3 4

3 5

4 5

4 6

5 6
Output:
5 3 1 2 4 6

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <cstring>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
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
void set(){
    For(i,0,nMax) dske[i].clear();
    For(i,0,nMax) dscanh[i].clear();
    memset(check,false,nMax);
}
void chuyendscanhsangdske(int dinh,int canh){
    For(i,0,canh){
        dske[dscanh[i][0]].push_back(dscanh[i][1]);
        dske[dscanh[i][1]].push_back(dscanh[i][0]);
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
        set();
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