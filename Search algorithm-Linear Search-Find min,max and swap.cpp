#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
using namespace std;
int Find_Max(int *a,int n){
    int max=0;
    Fori(i,0,n){
        if(a[i]>a[max]) max=i;
    }
    return max;
}
int Find_Min(int *a,int n){
    int min=0;
    For(i,0,n){
        if(a[i]<a[min]) min=i;
    }
    return min;
}
void Swap(int *a,int n){
    int max=Find_Max(a,n),min=Find_Min(a,n);
    swap(a[max],a[min]);
}
int main(){
    int a[1000], n;
    cin>>n;
    For(i,0,n) cin>>a[i];
    Swap(a,n);
    For(i,0,n) cout<<a[i]<<" ";
}