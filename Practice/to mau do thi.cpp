/*
Một trong những bài toán kinh điển của lý thuyết đồ thị là bài toán Tô màu đồ thị. Bài toán được phát biểu như sau: Cho đồ thị vô hướng G =<V, E> được biểu diễn dưới dạng danh sách cạnh và số M. Nhiệm vụ của bạn là kiểm tra xem đồ thị có thể tô màu các đỉnh bằng nhiều nhất M màu sao cho hai đỉnh kề nhau đều có màu khác nhau hay không?

https://media.geeksforgeeks.org/wp-content/uploads/mcolor.png

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào ba số V, E, M tương ứng với số đỉnh, số cạnh và số màu; phần thứ hai đưa vào các cạnh của đồ thị.
T, V, E, M thỏa mãn ràng buộc: 1≤T ≤100; 1≤V≤10; 1≤ E ≤N(N-1), 1≤V≤N.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input

Output

2
4  5  3
1 2

2 3

3 4

4 1

1 3
3 3 2
1 2

2 3

1 3

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
int n;
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
void color(int i){
    if(ans) return;
    if(i==dinh){
        ans=1;
        return;
    }
    For(j,1,n+1){
        bool check=true;
        for(auto u:dske[V[i].first]){
            if(maudinh[u]==j){
                check=false;
                break;
            }
        }
        if(check){
            maudinh[V[i].first]=j;
            color(i+1);
            maudinh[V[i].first]=0;
        }
    }
}
bool comp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
}
int main(){
    faster();
    test(){
        Set();
        int dd,dc; 
        cin>>dinh>>canh>>n;
        For(i,0,canh){
            cin>>dd>>dc;
            dscanh.push_back(pair<int,int>(dd,dc));
        }
        convert();
        For(i,1,dinh+1){
            V.push_back(make_pair(i,dske[i].size()));
        }
        sort(V.begin(),V.end(),comp);
        color(0);
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}


