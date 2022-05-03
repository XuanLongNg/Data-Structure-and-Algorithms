/*
Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
Mỗi test gồm hai số nguyên dương N và K(1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).
Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.
Ví dụ:

Input
2

2 2

4 2
Output
2

5

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
vector<vi>ans;
void Set(){
    For(i,0,100+1){
        vector<int>h;
        h.resize(100000+1,1);
        ans.push_back(h);
    }
    For(i,2,100+1){
        ll total=0;
        For(j,0,10000-0+1)
        if(j<i){
            ans[i][j]=ans[i-1][j];
            total=(total+ans[i][j])%Mod;
        }
        else{
            ans[i][j]=total;
            if(total-ans[i][j-i]<=0) total=total+Mod-ans[i][j-i];
            else total-=ans[i][j-i];
            total+=ans[i][j];
            total%=Mod;
        } 
    }
}
int main(){
    faster();
    Set();
    test(){ 
        int n,k; cin>>n>>k;
        cout<<ans[k][n]<<endl;
    }
}