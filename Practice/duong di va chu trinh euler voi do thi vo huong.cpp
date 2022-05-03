/*
Cho đồ thị vô hướng liên thông G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy kiểm tra xem đồ thị có đường đi Euler hay chu trình Euler hay không?


Đường đi Euler bắt đầu tại một đỉnh, và kết thúc tại một đỉnh khác.

Chu trình Euler bắt đầu tại một đỉnh, và kết thúc chu trình tại chính đỉnh đó.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh,  số cạnh của đồ thị; Dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤100; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra 1, 2, 0 kết quả mỗi test theo từng dòng tương ứng với đồ thị có đường đi Euler, chu trình Euler và trường hợp không tồn tại.
      Ví dụ:

 

 

 

Input:
2

6  10  

1 2 1 3 2 3 2 4 2 5 3 4 3 5 4 5 4 6 5 6

6 9  

1  2 1  3 2  3 2  4 2  5 3  4 3  5 4  5 4  6
Output:

2

1
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
int dinh, canh, truoc[1000];
void Set(){
    dscanh.clear();
    For(i,0,1000) dske[i].clear();
    memset(check,0,10000);
    memset(truoc,0,1000);
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
int checkans(){
    int deg[1000],canhle=0;;
    For(i,1,dinh+1)
    if(dske[i].size()%2!=0) canhle++;
    if(canhle==0)
    return 2;
    if(canhle==2) return 1;
    return 0;
}
int main(){
    faster();
    test(){
        Set();
        int dd,dc; 
        cin>>dinh>>canh;
        For(i,0,canh){
            cin>>dd>>dc;
            dscanh.push_back(pair<int,int>(dd,dc));
        }
        convert();
        cout<<checkans()<<endl;
    }
}

