/*
Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử trước đó của X[]. Ví dụ N=5, K=3, X[] ={2, 3, 5} thì tập con trước đó của X[] là {2, 3, 4}. Chú ý nếu tập con trong input là đầu tiên thì trước đó là tập con cuối cùng.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai số N và K; dòng tiếp theo đưa vào K phần tử của X[] là một tập con K phần tử của 1, 2, .., N.
T, K, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2

5  3

2  3  5

5  3

1  2  3
Output



2 3 4

3 4 5
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
int n,k;
vi ans,fans,eans;
void Pre(){
    if(ans==fans){
        ans=eans;
        return;
    }
    int i=k-1;
    while(i>0 && ans[i]==ans[i-1]+1 || i>=0 && ans[i]==i+1) i--;
    i=i>=0?i:0;
    ans[i]--;
    For(j,i+1,k) ans[j]=n-k+1+j;
    Fori(j,0,i)
    if(ans[j]==ans[j+1]) ans[j]--;
}
int main(){
    faster();
    test(){
        cin>>n>>k;
        ans.clear();
        fans.clear();
        eans.clear();
        int j=1,m=n-k+1;
        For(i,0,k){
            int h; cin>>h;
            ans.push_back(h);
            fans.push_back(j++);
            eans.push_back(m++);
        }
        Pre();
        For(i,0,k)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
}

