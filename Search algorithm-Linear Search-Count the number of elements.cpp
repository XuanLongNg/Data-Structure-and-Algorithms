#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int count(int *a,int n,int k){
    int s;
    For(i,0,n)
    if(a[i]==k) s++;
    return s;
}
int main(){
    int a[1000], n;
    cin>>n;
    For(i,0,n) cin>>a[i];
    int k; cin>>k;
    cout<<count(a,n,k);
}