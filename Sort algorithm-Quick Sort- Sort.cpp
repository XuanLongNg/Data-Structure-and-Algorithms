#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Quick_Sort(int *a,int l,int r){
    int h=a[l],i=l,j=r;
    if(i<j){
        while(a[i]<h) i++;
        while(a[j]>h) j--;
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
    int n,count=0,k,h=0,g=0; cin>>n;
    int a[100001];
    int b[100001],c[100001];
    For(i,0,n){
        cin>>k;
        if(k>0){
            b[h]=k;
            h++; a[i]=1;
        }
        else if(k<0){
            c[g]=k;
            g++; a[i]=-1;
        }else a[i]=0;
    }
    Quick_Sort(b,0,h-1);
    Quick_Sort(c,0,g-1);
    h=0;
    For(i,0,n){
        if(a[i]==-1){
            cout<<c[g-1]<<" ";
            g--;
        }
        else if(a[i]==1){
            cout<<b[h]<<" ";
            h++;
        }else cout<<a[i]<<" " ;
    }
    return 0; 
}