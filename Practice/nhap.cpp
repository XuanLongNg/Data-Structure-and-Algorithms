#include <bits/stdc++.h>
#define For(i, a, b) for (ll i = a; i < b; i++)
#define SORT(a) sort(a.begin(), a.end())
#define OUT(a) for(auto i:a) cout<<i<<" "; cout<<endl;
#define GET(a) for(auto &i:a) cin>>i;
#define ve vector<int>

#define vi vector<int>
#define pi pair<int, int>
#define ll long long
using namespace std;
string k,h;
int to_int(string k,int be,int end){
    int total=0;
    For(i,be,end){
        total=total*10+k[i]-'0';
    }
    return total;
}
void check(string k,string h,int i){
    int f1=0;
    For(j,i,h.size()+i){

    }
}
void Find(){
    For(i,0,k.size()-h.size()){
        if(k[i]<h[0]) check(k,h,i);
    }
}
int main(){
    cin>>k>>h;
    cout<<to_int(k,0,k.size())<<endl;
}