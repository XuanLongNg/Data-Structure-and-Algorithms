/*
Cho đồ thị vô hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết thuật toán duyệt theo chiều rộng bắt đầu tại đỉnh uÎV (BFS(u)=?)

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào ba số |V|, |E|, uÎV tương ứng với số đỉnh, số cạnh và đỉnh bắt đầu duyệt; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các đỉnh được duyệt theo thuật toán BFS(u) của mỗi test theo khuôn dạng của ví dụ dưới đây.
     Ví dụ:

Input:
1

6 9 1

1 2 1 3 2 3 2 5 3 4 3 5 4 5 4 6 5 6
Output:
1 2 3 5 4 6
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
const int nMax=1000006;
vector<int> dske[nMax];
vector<int> dscanh[nMax];
void set(int dinh,int canh){
    For(i,0,dinh) dske[i].clear();
    For(i,0,canh) dscanh[nMax].clear();
}
void chuyendscanhsangdske(int dinh,int canh){
    For(i,0,canh){
        dske[dscanh[i][0]].push_back(dscanh[i][1]);
        dske[dscanh[i][1]].push_back(dscanh[i][0]);
    }
}
void BFS(int u){
    queue<int> k;
    k.push(u);
    bool check[nMax];
    check[k.front()]=1;
    while(!k.empty()){
        int h=k.front(); cout<<h<<" ";
        check[h]=1;
        For(i,0,dske[h].size()){
            int v=dske[h][i];
            if(!check[v]){
                k.push(v);
                check[v]=1;
            }
        }
        k.pop();
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int dinh, canh, dd;
        cin>>dinh>>canh>>dd;
        set(dinh,canh);
        int dd1,dc;
        For(i,0,canh){
            cin>>dd1>>dc;
            dscanh[i].push_back(dd1);
            dscanh[i].push_back(dc);
        }
        chuyendscanhsangdske(dinh,canh);
        BFS(dd);
        cout<<endl;
    }
}
