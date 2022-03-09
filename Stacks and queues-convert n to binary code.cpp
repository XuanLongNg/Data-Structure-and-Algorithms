#include<iostream>
#include<stack>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
    int a;
    stack<char>h;
    cin>>a;
    while(a){
        h.push(a%2+'0');
        a/=2;
    }
    while(!h.empty()){
        cout<<h.top();
        h.pop();
    }
}