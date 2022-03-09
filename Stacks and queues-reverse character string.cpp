#include<iostream>
#include<stack>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
    string a;
    stack<char>h;
    getline(cin,a);
    For(i,0,a.size()){
        h.push(a[i]);
    }
    while(!h.empty()){
        cout<<h.top();
        h.pop();
    }
}