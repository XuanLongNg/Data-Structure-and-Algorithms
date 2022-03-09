#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void xuat(std::queue<int>b){
	while(!b.empty()){
		cout<<b.front()<<" ";
		b.pop();
	}
}
int main(){
	int n,k;
	cin>>n;
	bool c[1001];
	queue<int>a;
	For(i,0,n){
		cin>>k;
		a.push(k);
	}
	cin>>k;
	queue<int>b;
	For(i,0,n){
		if(c[a.front()]!=1){
			b.push(a.front());
		    c[a.front()]=1;
		}
		if(b.size()>k){
			c[b.front()]=0;
			b.pop();
		}
		a.pop();
	}
	xuat(b);
}