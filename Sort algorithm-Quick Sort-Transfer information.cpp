#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Quick_Sort(int *a,int l,int r){
    int head=a[l],i=l,j=r;
    if(i<j){
        while(a[i]<head) i++;
        while(a[j]>head) j--;
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
    int n,count=1,k; cin>>n;
    int a[1000];
    For(i,0,n) cin>>a[i];
    cin>>k;
    Quick_Sort(a,0,n-1);
    For(i,0,n-1){
        if(a[i+1]-a[i]>k) count++;
    }
    cout<<count;
    return 0; 
}