#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Selection_Sort(int *a,int n){
    int min;
    For(i,0,n-1){
        min=i;
        For(j,i+1,n)
        if(a[j]<a[min]) min=j;
        swap(a[i],a[min]);
    }
}
int main(){
    int a[1000], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    Selection_Sort(a,n);
    For(i,0,n) cout<<a[i]<<" ";
}