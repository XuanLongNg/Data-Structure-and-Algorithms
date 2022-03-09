#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Merge(int *a,int l,int r,int mid){
    int h,k;
    h=mid-l+1;
    k=r-mid;
    int a1[h],a2[k];
    For(i,0,h) a1[i]=a[i+l];
    For(i,0,k) a2[i]=a[i+mid+1];
    int i=0,j=0,n=l;
    while(i<h&&j<k){
        if(a1[i]>a2[j]){
            a[n]=a2[j];
            j++;
        }else{
            a[n]=a1[i];
            i++;
        }
        n++;
    } 
    while(i<h){
        a[n]=a1[i];
        n++;
        i++;
    }
    while(j<k){
        a[n]=a2[j];
        n++;
        j++;
    }
}
void Merge_Sort(int *a,int l,int r){
    if(r>l){
        int mid=(l+r)/2;
        Merge_Sort(a,l,mid);
        Merge_Sort(a,mid+1,r);
        Merge(a,l,r,mid);
    }
}
int main(){
    int a[100001], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    Merge_Sort(a,0,n-1);
    For(i,0,n) cout<<a[i]<<" ";
}