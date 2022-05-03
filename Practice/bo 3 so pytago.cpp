/*
Cho dãy số A[] gồm có N phần tử. Một bộ 3 số (a, b, c) được gọi là bộ ba số Pytago nếu như a^2 + b^2 = c^2.

Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số Pytago trong dãy số A[] hay không?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên N (1≤ N ≤5000).

Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 10^9).

Output: 

Với mỗi test, in ra trên một dòng “YES” nếu tìm được, và “NO” trong trường hợp ngược lại.

 

Ví dụ:

Input:
2

5

3 1 4 6 5

3

1 1 1
Output
YES

NO
*/
#include <bits/stdc++.h>
#define faster()				    \
	ios_base::sync_with_stdio(0);	\
	cin.tie(NULL);  	     	    \
	cout.tie(NULL)
#define test()				\
	int test;				\
	cin>>test;				\
	while(test--)		
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
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
bool binary_search(ll *a,int l,int r,ll k){
    int mid;
    while(l<r){
        mid = (l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return a[l]==k;
}
int main(){
    faster();
    test(){
        int n; cin>>n;
        ll a[n];
        For(i,0,n){
            cin>>a[i];
        }
        sort(a,a+n);
        int check=0;
        For(i,0,n-2){
            For(j,i+1,n-1){
                ll k=pow(a[i],2)+pow(a[j],2);
                if(sqrt(k)*sqrt(k)==k&&binary_search(a+j+1,a+n-1,sqrt(k))){
                    check=1;
                    break;
                }
            }
            
        }
        if(check==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
