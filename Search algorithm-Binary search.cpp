#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int binary_search(int *a,int n,int k){
    int L=0,R=n-1,mid;
    while(L<R){
        mid=(L+R)/2;
        if(a[mid]>=k) R=mid;
        else L=mid+1;
    }
    if(a[L]==k) return L;
    return -1;
}
int main(){
    int a[1000], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    cin>>h;
    cout<< binary_search(a,n,h);
}