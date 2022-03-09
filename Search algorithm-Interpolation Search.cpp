#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int Interpolation_Search(int *a,int h,int l,int r){
    int head=0,tail,total=0;
    int mid;
    while(a[r]!=a[l]&&h>=a[l]&&h<=a[r]){
        mid = l + (r-l)*(h-a[l])/(a[r]-a[l]);
        if(a[mid]>h) r=mid-1;
        else if(a[mid]<h) l=mid+1;
        else{
            if(mid>0&&a[mid-1]==h) return mid-1;
            else return mid;
        }
    }
    if(a[l]==h) return l;
    else return -1;
}
int main(){
    int a[1000], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    cin>>h;
    cout<<Interpolation_Search(a,h,0,n-1);
}