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
#define pii pair<int,int>
using namespace std;
int dinh,canh;
vi mtke[1001];
vector<pair<int,int> >dscanh;
void convert(){
    For(i,1,dinh+1){
        For(j,0,dinh)
        if(j>i-1&&mtke[i][j]==1) dscanh.push_back(make_pair(i,j+1));
    }
}
void OUT(){
    cout<<dinh<<" "<<canh<<endl;
    For(i,0,dscanh.size()){
        cout<<dscanh[i].first<<" "<<dscanh[i].second<<endl;
    }
}
int main(){
    cin>>dinh>>canh;
    For(i,1,dinh+1){
        For(j,0,dinh){
            int k; cin>>k;
            mtke[i].push_back(k);
        }
    }
    convert();
    OUT();
}