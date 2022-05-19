/*
Cho cây nhị phân, nhiệm vụ của bạn là tính tổng của tất cả các node lá bên phải trên cây? Ví dụ với cây dưới đây ta có kết quả là 2.



 

     Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng đầu tiên đưa vào số N là số lượng cạnh của cây; dòng tiếp theo đưa vào N bộ ba (u, v, x), trong đó u là node cha, v là node con, x= R nếu v là con phải, x=L nếu v là con trái; u, v, x được viết cách nhau một vài khoảng trống.
T, N, u, v, thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤103; 1≤u, v≤104;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
      Ví dụ:

Input
2
2
1 2 L 1 3 R
5
10 20 L 10 30 R 20 40 L 20 60 R 30 90 L
Output
3
60

*/
#include <bits/stdc++.h>
#include <cstring>
#define faster()				    \
	ios_base::sync_with_stdio(0);	\
	cin.tie(NULL);  	     	    \
	cout.tie(NULL)
#define test()				\
	int test;				\
	cin>>test;				\
	while(test--)		
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define pb push_back
#define f first 
#define s second
#define ll long long
#define ld long double
#define ulli usignal long long int
#define lli unsigned long long int
#define vec(c) vector<c>
#define vi vector<int>
#define vll vector<long long>
#define rev(c) reverse(c.begin(),c.end())
#define pau system("pause");
#define Mod 1000000007
#define N 1000001
#define Ite ::iterator
using namespace std;
map<ll,bool> truoc,sau;
void Count( map<ll,ll> arr){
    ll ans=0;
    for(auto i:arr){
        if(!sau[i.first]&&truoc[i.first]) ans+=i.first;
    }
    cout<<ans<<endl;
}
int main(){
    faster();
    test(){
        ll n; cin>>n;
        ll u,v;
        string x;
        map<ll,ll> arr;
        if(n==1){
            cin>>u>>v>>x;
            arr[u]=1; arr[v]=1;
            truoc[u]=1;
            sau[v]=1;
        }else{
            For(i,0,n){
            cin>>u>>v>>x;
            arr[u]=1; arr[v]=1;
            truoc[v]=x=="L"||x=="l"?0:1;
            sau[u]=1;
            }
        }
        Count(arr);
        truoc.clear();
        sau.clear();
    }
}