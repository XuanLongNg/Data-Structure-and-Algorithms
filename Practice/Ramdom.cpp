#include <cstdlib>
#include <ctime>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
int GetRandom(int min,int max){
    return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    For(i,a,b) {
        cout << GetRandom(c,d)<<" ";
    }
}