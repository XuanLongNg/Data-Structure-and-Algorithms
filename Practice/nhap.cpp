#include <bits/stdc++.h>
#define For(i, a, b) for (ll i = a; i < b; i++)
#define SORT(a) sort(a.begin(), a.end())
#define OUT(a) for(auto u:a) cout<<u<<" "; cout<<endl;
#define GET(a) for(auto &u:a) cin>>u;

#define vi vector<int>
#define pi pair<int, int>
#define ll long long
using namespace std;

int k;
string ans;

int f_index(int i,string s){
    int u=i+1,Max=i;
    for(;u<s.size();u++){
        if(s[u]>s[Max]) Max=u; 
    }
    return Max;
}

void Try(int i,int k,string s){
    if(i==s.size() || k==0){
        if(s>ans) ans=s;
        //cout<<s<<endl;
        return;
    }
    int x=f_index(i,s);
    if(s[i]==s[x]){
        Try(i+1,k,s);
        return;
    }
    for(int u=i+1;u<s.size();u++){
        if(s[u]==s[x]){
            swap(s[i],s[u]);
            Try(i+1,k-1,s);
            swap(s[i],s[u]);
        }
    }
}

void process()
{
   cin>>k;
   cin>>ans;
   Try(0,k,ans);
   cout<<ans<<endl;
   ans.clear();
}

int t;

int main()
{
    cin >> t;
    while (t--)
        process();
}