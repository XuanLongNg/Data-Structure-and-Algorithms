#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool check[10]={0};
void Display(int *a,int n){
    For(i,0,n)
    cout<<a[i];
    cout<<" ";
}
void generate_permutation(int n,int *a,int i){
    For(j,1,n+1){
        if(check[j]==false){
            a[i]=j;
            check[j]=true;
            if(i==n-1) Display(a,n);
            else generate_permutation(n,a,i+1);
            check[j]=false;
        }
    }
}
int main(){
	int n;
	cin >> n;
    int a[10];
    generate_permutation(n,a,0);
	return 0;
}