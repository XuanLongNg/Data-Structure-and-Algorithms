#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
    int a[1000], n,k=0;
    cin>>n;
    For(i,0,n) cin>>a[i];
    for(int i=0;i<n;i+=2){
        if(a[i]%2!=0){
            cout<<a[i]<<" ";
            k++;
        }
    }
    if(k==0) cout<<"NULL";
}