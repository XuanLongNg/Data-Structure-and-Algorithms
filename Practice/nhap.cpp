#include <bits/stdc++.h>
#define For(i, a, b) for (ll i = a; i < b; i++)
#define SORT(a) sort(a.begin(), a.end())
#define OUT(a) for(auto i:a) cout<<i<<" "; cout<<endl;
#define GET(a) for(auto &i:a) cin>>i;

#define vi vector<int>
#define pi pair<int, int>
#define ll long long
using namespace std;

int n;
char c;
vi un;
string a,r;

bool vowel(char x){
    if(x=='A' || x=='E') return true;
    return false;
}
bool check(){
    for(int i=0;i<n;i++){
        if(i>0 && i<n-1){
            if(vowel(r[i])){
                if(!vowel(r[i-1]) && !vowel(r[i+1])) return false;
            }
        }
    }
    return true;
}

void Try(int i){
    if(i==n){
        if(check()) cout<<r<<endl;
        return;
    }
    for(int u=0;u<n;u++){
        if(un[u]){
            r[i]=a[u];
            un[u]=0;
            Try(i+1);
            un[u]=1;
        }
    }
}

void process()
{
    cin>>c;
    for(char i='A';i<=c;i++) a.push_back(i);
    n=a.size();
    un.resize(n,1);
    r.resize(n);
    Try(0);
}

int main()
{
    // cin >> t;
    // while (t--)
        process();
}