#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	int m,n;
	cin>>m>>n;
	map<int,int>s;
	For(i,0,n){
		int k; cin>>k;
		s[k]++;
	}
	For(i,0,m){
		int k; cin>>k;
		s[k]++;
	}
	cout<<s.size();
}
