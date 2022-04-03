#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
int main(){
    ll x[100];
    x[1]=1;
    x[2]=1;
    For(i,3,92){
        x[i]=x[i-1]+x[i-2];
    }
    cout<<x[90];
}