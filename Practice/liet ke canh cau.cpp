/*
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy đưa ra tất cả các cạnh cầu của đồ thị?

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| + 1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh; |E| dòng tiếp theo đưa vào các bộ đôi u, v tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách các cạch cầu của mỗi test theo từng dòng. In ra đáp án theo thứ tự từ điển, theo dạng “a b …” với a < b.
       Ví dụ:

Input:
1

5 5

1 2 

1 3

2 3

2 5

3 4
Output:
2 5 3 4

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
void DFS(int i,int &count){
    check[i] = true;
    count++;
    For(j,0,dske[i].size())
    if(!check[dske[i][j]]) DFS(dske[i][j],count);
}
void duyet_cau(){
    for(auto i:dscanh){
        memset(check,0,10000);
        int k=lower_bound(dske[i.first].begin(),dske[i.first].end(),i.second)-dske[i.first].begin(),h=lower_bound(dske[i.second].begin(),dske[i.second].end(),i.first)-dske[i.second].begin();
        dske[i.first].erase(dske[i.first].begin()+k);
        dske[i.second].erase(dske[i.second].begin()+h);
        int ans=0;
        DFS(1,ans);
        if(ans!=dinh) cout<<i.first<<" "<<i.second<<" ";
        dske[i.first].insert(dske[i.first].begin()+k,i.second);
        dske[i.second].insert(dske[i.second].begin()+h,i.first);
    }
}
int main(){
    faster();
    test(){
        int k,h;
        Set();
        cin>>dinh>>canh;
        For(i,0,canh){
            cin>>k>>h;
            dscanh.push_back(pair<int,int>(k,h));
        }
        convert();
        duyet_cau();
        cout<<endl;
    }
}