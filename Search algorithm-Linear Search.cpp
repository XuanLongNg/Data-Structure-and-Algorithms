#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int Linear_search(int *a,int n,int k){
    For(i,0,n){
        if(a[i]==k) return i;
    }
    return -1;
}
int main(){
    int a[1000], n;
    cin>>n;
    For(i,0,n) cin>>a[i];
    int k; cin>>k;
    cout<<Linear_search(a,n,k);
}