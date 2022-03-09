/*
Cho dãy số A[] gồm có N phần tử.

Nhiệm vụ của bạn là đếm xem có bao nhiêu cặp (i, j) mà A[i] + A[j] = K cho trước.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 0 ≤ K ≤ 10^9).

Dòng tiếp theo gồm N số nguyên A[i] (-10^9 ≤ A[i] ≤ 10^9).

Output: 

Với mỗi test, in ra trên một dòng là đáp án thu được.

 

Ví dụ:

Input:

4

4 6

1 5 7 -1

5 6

1 5 7 -1 5

4 2

1 1 1 1

13 11

10 12 10 15 -1 7 6 5 4 2 1 1 1

Output
2

3

6

9
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        ll n,count=0,k; cin>>n>>k;
        ll x; 
        map<ll, ll> a;
        map<ll, ll>::iterator it;
        For(i,0,n){
            cin>>x;
            a[x]++;
        }
        for(it=a.begin();it!=a.end();it++){
            if(a[k-it->first]>0&&it->first<=k-it->first){
                if(k-it->first==it->first){
                    count+=((it->second-1)*it->second)/2;
                }
                else{
                    count+=it->second*a[k-it->first];
                }
            }
        }
        cout<<count<<endl;
    }
}