#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Ite ::iterator
using namespace std;
int main(){
	int n,k;
	cin>>n;
	map<int,int> s;
	For(i,0,n){
		cin>>k;
		s[k]++;
	}
	map<int,int>Ite it;
	for(it=s.begin();it!=s.end();it++){
		cout<<it->first<<" ";
	}
}
