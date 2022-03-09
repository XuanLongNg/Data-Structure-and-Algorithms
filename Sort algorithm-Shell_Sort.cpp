#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Shell_Sort(int *a,int n)
{
    int value,interval,i,j;
    for(interval=n/2;interval>0;interval/=2){
        for(i=interval;i<n;i++){
            value=a[i];
            for(j=i;j>=interval&&a[j-interval]>value;j-=interval){
                a[j]=a[j-interval];
            }
            a[j]=value;
        }
    }
}
int main(){
    int a[100001], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    Shell_Sort(a,n);
    For(i,0,n) cout<<a[i]<<" ";
}