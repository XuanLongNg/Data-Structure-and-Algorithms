#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void display(char *a,int n){
    For(i,0,n) cout<<a[i];
    cout<<" ";
}
void binary_generation(int n,char *a,int i){
    For(j,0,2){
        a[i]=j+'0';
        if(i==n-1) display(a,n);
        else binary_generation(n,a,i+1);
    }
}
int main(){
	int n;
	cin >> n;
    char a[n];
    binary_generation(n,a,0);
	return 0;
}