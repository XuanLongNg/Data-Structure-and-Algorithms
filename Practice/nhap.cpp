#include <bits/stdc++.h>
#define For(i, a, b) for (int i = a; i < b; i++)
#define SORT(a) sort(a.begin(), a.end())
#define OUT(a) for(auto u:a) cout<<u<<" ";cout<<endl;
#define GET(a) for(auto &u:a) cin>>u;

#define vi vector<int>
#define pi pair<int, int>
#define ll long long
using namespace std;

ll code(string s){
	if(s[0]=='0') return 0;
	int x=stoi(s);
	if(x>0 && x<27) return 1;
	return 0;
}

void solve(){
	string s;
	cin>>s;
	int n=s.size();
	ll dp[n+1];
	dp[n]=1;
	dp[n-1]=code(string(s.begin()+n-1,s.end()));
	for(int i=n-2;i>=0;i--){
		dp[i]=code(string(s.begin()+i,s.begin()+i+1))*dp[i+1];
		dp[i]+=code(string(s.begin()+i,s.begin()+i+2))*dp[i+2];
	}
	cout<<dp[0]<<endl;
}

int main()
{	
    int t;
    cin>>t;
    while(t--)
    solve();
}