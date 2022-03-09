#include <bits/stdc++.h>
using namespace std;
long long guess_the_number(long long n){
    if(n==1) return 1;
    return 1+guess_the_number(n-(n+1)/2);
}
int main(){
	long long n;
	cin >> n;
	cout<<guess_the_number(n);
	return 0;
}