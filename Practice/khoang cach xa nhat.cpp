/*
Cho dãy số A[] gồm có N phần tử. Bạn cần tìm 2 vị trí i, j sao cho j-i lớn nhất và A[j] > A[i].

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 100 000).

Dòng tiếp theo gồm N số nguyên A[i] (-10^6 ≤ A[i] ≤ 10^6).

Output: 

Với mỗi test, in ra trên một dòng là giá trị của hiệu j-i tìm được.

Ví dụ:

Input:
3

9

34 8 10 3 2 80 30 33 1

6

1 2 3 4 5 6

6

6 5 4 3 2 1
Output
6

5

-1

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
int find(set<int> a,int n,vector<pair<int,int> >check){
    int Max=0;
    Fori(i,0,n){
        int temp=*a.begin();
        Max=max(Max,check[i].second-temp);
        a.erase(check[i].second);
    }
    return Max==0? -1:Max;
}
bool comp(pair<int,int>a,pair<int,int>b){
    return a.first<b.first;
}
int main(){
    faster();
    test(){
        int n; cin>>n;
        set<int> a;
        vector<pair<int,int>>check;
        int k;
        For(i,0,n){
            cin>>k;
            a.insert(i);
            check.push_back(pair<int,int>(k,i));
        }
        sort(check.begin(),check.end(),comp);
        cout<<find(a,n,check)<<endl;
    }
}