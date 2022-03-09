#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void sliding_window(int *a,int n,int h){
    int head=0,tail,total=0;
    For(i,0,n){
        tail=i;
        total+=a[i];
        while(total>h){
            total-=a[head];
            head+=1;
        }
        if(total==h){
            For(j,head,tail+1){
                cout<<a[j]<<" ";
            }
            break;
        }
    }
    if(total!=h) cout<<"-1";
}
int main(){
    int a[1000], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    cin>>h;
    sliding_window(a,n,h);
}