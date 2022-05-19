/*
Cho đồ thị có trọng số không âm G=<V, E> được biểu diễn dưới dạng danh sách cạnh trọng số. Hãy viết chương trình tìm đường đi ngắn nhất từ đỉnh uÎV đến tất cả các đỉnh còn lại trên đồ thị.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E|+1 dòng: dòng đầu tiên đưa vào hai ba số |V|, |E| tương ứng với số đỉnh và uÎV là đỉnh bắt đầu; |E| dòng tiếp theo mỗi dòng đưa vào bộ ba uÎV, vÎV, w tương ứng với một cạnh cùng với trọng số canh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra kết quả của mỗi test theo từng dòng. Kết quả mỗi test là trọng số đường đi ngắn nhất từ đỉnh u đến các đỉnh còn lại của đồ thị theo thứ tự tăng dần các đỉnh.
     Ví dụ:

Input:



1

9  12 1

1  2   4

1  8   8

2  3   8

2  8   11

3  4   7

3  6   4

3  9   2

4  5   9

4  6  14

5  6  10

6  7  2

6  9  6
Output:
0 4 12 19 26 16 18 8 14
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
vi dske[1001];
bool check[1001],ans;
vector< pair<int,int> > dscanh;
vi dsdinh;
int dinh, canh,u,truoc[1001];
ll tsdinh[1001];
map<pair<int,int>,int>trongso;
void Set(){
    ans=0;
    dscanh.clear();
    For(i,0,1001) dske[i].clear();
    memset(check,0,sizeof(check));
    memset(tsdinh,1e1,sizeof(tsdinh));
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
        dske[dc].push_back(dd);
    }
}
void Dijkstra(int start){
    tsdinh[start]=0;
    dsdinh.erase(lower_bound(dsdinh.begin(),dsdinh.end(),start));
    for(auto i:dske[start]){
        truoc[i]=start;
        tsdinh[i]=trongso[make_pair(i,start)];
    }
    while(dsdinh.size()>0){
        ll Min=1e18,tsmin;
        for(auto i:dsdinh)
        if(tsdinh[i]<Min){
            Min=tsdinh[i];
            tsmin=i;
        }
        dsdinh.erase(lower_bound(dsdinh.begin(),dsdinh.end(),tsmin));
        for(auto i:dske[tsmin]){
            if(tsdinh[i]>Min+trongso[make_pair(i,tsmin)]){
                tsdinh[i]=Min+trongso[make_pair(i,tsmin)];
                truoc[i]=tsmin;
            }
        } 
    }
}
int main(){
    faster();
    test(){
        Set();
        int dd,dc,u,ts; 
        cin>>dinh>>canh>>u;
        For(i,0,dinh) dsdinh.push_back(i+1);
        For(i,0,canh){
            cin>>dd>>dc>>ts;
            dscanh.push_back(pair<int,int>(dd,dc));
            trongso[make_pair(dd,dc)]=ts;
            trongso[make_pair(dc,dd)]=ts;
        }
        convert();
/*        For(j,1,dinh+1){
        	for(auto i:dske[j]) cout<<i<<" ";
        	cout<<endl;
		}
*/      Dijkstra(u);
        For(i,1,dinh+1) cout<<tsdinh[i]<<" ";
        cout<<endl;
    }
}