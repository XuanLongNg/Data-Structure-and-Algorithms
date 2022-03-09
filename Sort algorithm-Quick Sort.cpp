#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Quick_Sort(int *a,int l,int r){
    int pivot=a[(l+r)/2],i,j;
    i=l;j=r;
    while(i<j){
        while(a[i]<pivot) i++;
        while(a[j]>pivot) j--;
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
    int a[100001], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    Quick_Sort(a,0,n-1);
    For(i,0,n) cout<<a[i]<<" ";
}