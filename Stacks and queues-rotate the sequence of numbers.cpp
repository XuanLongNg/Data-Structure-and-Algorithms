#include<iostream>
#include<queue>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
    int a,b;
    cin>>a;
    queue<int>c;
    For(i,0,a){
        cin>>b;
        c.push(b);
    }
    int k; cin>>k;
    while(k--){
        b=c.front();
        c.pop();
        c.push(b);
    }
    while(!c.empty()){
        cout<<c.front()<<" ";
        c.pop();
    }
}