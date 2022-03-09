#include<iostream>
#include<stack>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
    string a;
    stack<char>h,k;
    getline(cin,a);
    For(i,0,a.size()){
        h.push(a[i]);
    }
    char x=h.top();
    int count=0;
    while(!h.empty()){
        if(h.top()!=x){
            k.push(count+'0');
            k.push(x);
            x=h.top();
            count=1;
        }else count++;
        h.pop();
    }
    k.push(count+'0');
    k.push(x);
    while(!k.empty()){
        cout<<k.top();
        k.pop();
    }
}