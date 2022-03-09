#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Bubble_Sort(int *a,int n){
    for(int i=n-1;i>=1;i--){
        bool l=0;
        For(j,0,i){
            if(a[j+1]<a[j]){
                swap(a[j+1],a[j]);
                l=1;
            }
        }
        if(l==0) break;
    }
}
int main(){
    int a[1000], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    Bubble_Sort(a,n);
    For(i,0,n) cout<<a[i]<<" ";
}