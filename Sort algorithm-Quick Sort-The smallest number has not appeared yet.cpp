#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Quick_Sort(int *a,int l,int r){
    int n=a[l],i=l,j=r;
    while(i<j){
        while(a[i]<n) i++;
        while(a[j]>n) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(i<r) Quick_Sort(a,i,r);
    if(j>l) Quick_Sort(a,l,j);
}
int main(){
    int n; cin>>n;
    int a[1000];
    For(i,0,n) cin>>a[i];
    Quick_Sort(a,0,n-1);
    int t=a[0];
    if(t>0){
        cout<<"0";
        return 0;
    }
    For(i,0,n){
        if(t<a[i]) break;
        if(t==a[i]) t++;
    }
    cout<<t;
    return 0; 
}