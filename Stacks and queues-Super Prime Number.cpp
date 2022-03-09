#include <bits/stdc++.h>
#define N 1000001
using namespace std;
queue<int>b;
bool isPrime(int n){
	if (n<2) return false;
	for (int i=2; i<=sqrt(n); i++)
	if (n%i==0) return false;
	return true;
}
void superPrimeNumber(int n){
	for(int i=2;i<9;i++)
	if(isPrime(i)) b.push(i);
	while(!b.empty()){
		int k=b.front(),h;
		for(int i=1;i<=9;i++){
			h=k*10+i;
			if(isPrime(h)) b.push(h);
		}
		if(b.front()<=n) cout<<b.front()<<" ";
		else break;
		b.pop();		
	}
}
int main(){
    int a;
    cin>>a;
    superPrimeNumber(a);
}