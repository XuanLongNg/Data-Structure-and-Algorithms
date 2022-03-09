#include <bits/stdc++.h>
using namespace std;
int Count=0;
void convert(long long n,long long k){
    if(k==0) Count++;
    else{
    long long a1,a2;
    a1=n*2;
    a2=(n-1);
    convert(a1,k-1);
    if((a2/3)%2!=0&&a2%3==0) convert(a2/3,k-1);
    }
}
int main(){
	long long n,k;
	cin >> n>>k;
    convert(n,k);
	cout<<Count;
	return 0;
}