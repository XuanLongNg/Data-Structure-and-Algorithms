#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool perfect_square(int a){
    int k=(int) sqrt(a);
    return k*k==a;
}
int main(){
    int n,count=0,k; cin>>n;
    map<int,int>s;
    For(i,0,n){
        cin>>k;
        s[k]++;
    }
    map<int,int>::iterator it;
    for(it=s.begin();it!=s.end();it++){
        if(perfect_square(it->first)==1){
            cout<<it->first<<" ";
            count=1;
        }
    }
    if(count==0) cout<<"NULL";
    return 0; 
}