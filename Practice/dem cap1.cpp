/*
Cho mảng A[] gồm n số nguyên dương và số k. Nhiệm vụ của bạn là đếm số các cặp phần tử có hiệu nhỏ hơn k. Ví dụ A[] = {1, 10, 4, 2 }, k=3 ta nhận được kết quả là 2 tương ứng với hiệu các cặp (1, 2), (4, 2).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
T, n, k, A[i] thỏa mãn ràng buộc: 1 ≤  T  ≤ 100; 1 ≤  n  ≤ 104; 1 ≤  k ≤ 103; 1 ≤  A[i]  ≤ 105.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
4 3
1 10 4 2
3 5
2 3 4
Output
2
3
 

*/
#include <bits/stdc++.h>
#define faster()				    \
	ios_base::sync_with_stdio(0);	\
	cin.tie(NULL);  	     	    \
	cout.tie(NULL)
#define test()				\
	ll test;				\
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
int main(){
    faster();
    test(){
        ll n,k; cin>>n>>k;
        ll a[n];
        For(i,0,n){
            cin>>a[i];
        }
        ll Count=0;
        sort(a,a+n);
        For(i,,n){
            ll h=upper_bound(a,a+n,a[i]-k)-a;
            Count+=i-h;
        }
        cout<<Count<<endl;
    }
}