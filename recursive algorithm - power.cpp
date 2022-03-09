#include <bits/stdc++.h>
using namespace std;
long long Pow(int a,int b){
    if(b==0) return 1;
    return a*Pow(a,b-1);
}
int main(){
	int a,b;
	cin >> a >> b;
	cout << Pow(a,b);
	return 0;
}