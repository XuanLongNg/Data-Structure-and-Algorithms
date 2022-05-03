/*
Cho dãy số A[] gồm có N phần tử. Bạn cần tìm chênh lệch nhỏ nhất giữa hai phần tử bất kì trong dãy số đã cho.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 100 000).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10^9).

Output: 

Với mỗi test, in ra trên một dòng là đáp án tìm được.

 

Ví dụ:

Input:
3

6

1 5 3 19 18 25

4

30 5 20 9

7

1 19 2 31 38 25 100
Output
1

4

1

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
bool binary_search(int *a,int l,int r,int k){
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
        int a[n];
        For(i,0,n){
            cin>>a[i];
        }
        sort(a,a+n);
        int Min=abs(a[0]-a[1]);
        For(i,1,n){
           Min=min(Min,abs(a[i]-a[i-1]));
        }
        cout<<Min<<endl;
    }
}