/*
Trường học X có N sinh viên, trong đó có M cặp là bạn bè của nhau. Bạn của bạn cũng là bạn, tức là nếu A là bạn của B, B là bạn của C thì A và C cũng là bạn bè của nhau.

Các bạn hãy xác định xem số lượng sinh viên nhiều nhất trong một nhóm bạn là bao nhiêu?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test bắt đầu bởi 2 số nguyên N và M (N, M ≤ 100 000).

M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u, v (u #v) cho biết sinh viên u là bạn của sinh viên v.

Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng.

Ví dụ:

Input:

2

3 2

1 2

2 3

10 12

1 2

3 1

3 4

5 4

3 5

4 6

5 2

2 1

7 1

1 2

9 10

8 9

Output:

3

7
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
vi dske[100001];
vector<pair<int,int>> dscanh;
int dinh, canh;
int ans;
bool check[100001];
void Set(){
    ans=0;
    dscanh.clear();
    For(i,0,100001)
        dske[i].clear();
    memset(check,0,sizeof(check));
}
void convert(){
    For(i,0,canh){
        int dd=dscanh[i].first,dc=dscanh[i].second;
        dske[dd].push_back(dc);
        dske[dc].push_back(dd);
    }
}
void DFS(int i){
    check[i]=1;
    ans++;
    for(auto j:dske[i])
    if(!check[j]) DFS(j);
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
        int Max=0;
        For(i,1,dinh+1){
            ans=0;
            DFS(i);
            Max=max(Max,ans);
        }
        cout<<Max<<endl;
    }
}