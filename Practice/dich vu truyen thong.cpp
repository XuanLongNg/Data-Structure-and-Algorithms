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
vi dske[500];
int truoc[500];
int n,m,k; 
map<pair<int,int>,int> cost;
int Try(int dd,int dc){
    if(truoc[dd]==0) return 0;
    int price=0;
    int u=truoc[dd];
    price+=cost[pair<int,int>(dd,u)]*100;
    while(u!=dc){
        price+=cost[pair<int,int>(truoc[u],u)]*100;
        u=truoc[u];
    }
    price+=cost[pair<int,int>(dc,u)]*100;
    return price;
}
void BFS(int dd){
    queue<int>q;
    vector<bool> check;
    check.resize(500,0);
    q.push(dd);
    truoc[dd]=0;
    check[dd]=true;
    while(!q.empty()){
        int h=q.front();
        q.pop();
        For(i,0,dske[h].size()){
            int v=dske[h][i];
            if(!check[v]){
                check[v]=true;
                truoc[v]=h;
                q.push(v);
            }
        }
    }
}
int main() {
    memset(truoc,0,500);
    cin>>n>>m>>k;
    int u[m],v[m],c[m];
    For(i,0,m){
        cin>>u[i]>>v[i]>>c[i];
        cost[pair<int,int>(u[i],v[i])]=c[i];
        cost[pair<int,int>(v[i],u[i])]=c[i];
    }
    int x[k],y[k],z[k];
    For(i,0,k){
        cin>>x[i]>>y[i]>>z[i];
    }
    For(i,0,m){
        dske[u[i]].push_back(v[i]);
        dske[v[i]].push_back(u[i]);
    }
    For(i,0,k){
        BFS(x[i]);
        int Min[n+1],total=0;
        For(j,1,n+1) Min[j]=1e9;
        For(j,1,n+1)
        if(x[i]!=j&&y[i]!=j&&z[i]!=j) Min[j]=min(Min[j],Try(j,x[i]));
        BFS(y[i]);
        For(j,1,n+1)
        if(x[i]!=j&&y[i]!=j&&z[i]!=j) Min[j]=min(Min[j],Try(j,y[i]));
        BFS(z[i]);
        For(j,1,n+1)
        if(x[i]!=j&&y[i]!=j&&z[i]!=j) Min[j]=min(Min[j],Try(j,z[i]));
        For(j,1,n+1)
        if(x[i]!=j&&y[i]!=j&&z[i]!=j) total+=Min[j];
        cout<<total<<endl;
    }
}