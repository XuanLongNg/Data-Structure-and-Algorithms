#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Insertion_Sort(int *a,int n){
    int value,index=0;
    For(i,1,n){
        value=a[i];
        index=i;
        while(index>0&&a[index-1]>value){
            a[index]=a[index-1];
            index--;
        }
        a[index]=value;
    }
}
int main(){
    int a[1000], n,h;
    cin>>n;
    For(i,0,n) cin>>a[i];
    Insertion_Sort(a,n);
    For(i,0,n) cout<<a[i]<<" ";
}