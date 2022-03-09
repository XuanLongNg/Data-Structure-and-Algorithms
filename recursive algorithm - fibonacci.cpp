#include <bits/stdc++.h>
using namespace std;
long long Fibo(int n){
    if(n==1||n==2) return 1;
    return Fibo(n-1)+Fibo(n-2);
}
int main(){
	int a;
	cin >> a;
	cout << Fibo(a);
	return 0;
}