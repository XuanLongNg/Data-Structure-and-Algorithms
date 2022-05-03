#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
const int nMax=1000006;
vector<int> dske[nMax];
vector<int> dscanh[nMax];
bool check[nMax];
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
void BFS(int u){
    queue<int> k;
    k.push(u);
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
        set();
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
