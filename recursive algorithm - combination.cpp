#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Display(int *a,int n){
    For(i,0,n)
    cout<<a[i];
    cout<<" ";
}
void next_combination(int n,int k,int *a,int i){
    For(j,1,n+1){
        if(j>a[i-1]){
            a[i]=j;
            if(i==k-1) Display(a,k);
            else next_combination(n,k,a,i+1);
        }
    }
}
int main(){
	int n,k;
	cin >> n >> k;
    int a[10];
    next_combination(n,k,a,0);
	return 0;
}