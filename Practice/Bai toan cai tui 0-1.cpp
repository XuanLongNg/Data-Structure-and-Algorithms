/*
Một người có cái túi thể tích V (V<1000). Anh ta có N đồ vật cần mang theo (N≤1000), mỗi đồ vật có thể tích là A[i] (A[i]≤100) và giá trị là C[i] (C[i]≤100). Hãy xác định tổng giá trị lớn nhất của các đồ vật mà người đó có thể mang theo, sao cho tổng thể tích không vượt quá V.

Input

Dòng đầu ghi số bộ test T (T<10)
Mỗi bộ test gồm ba dòng. Dòng đầu ghi 2 số N và V. Dòng tiếp theo ghi N số của mảng A. Sau đó là một dòng ghi N số của mảng C.
Dữ liệu vào luôn đảm bảo không có đồ vật nào có thể tích lớn hơn V.
Output

Với mỗi bộ test, ghi trên một dòng giá trị lớn nhất có thể đạt được.
Ví dụ

Input
1

15 10

5 2 1 3 5 2 5 8 9 6 3 1 4 7 8

1 2 3 5 1 2 5 8 7 4 1 2 3 2 1
Output

15
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
int Find(vector<pair<int,int>> item,int n,int v){
	vi cost;
	int Max=0;
	cost.resize(v+1,0);
	For(j,0,n){
		Fori(i,0,v+1){
			if(i>=item[j].first)
			cost[i]=max(cost[i],cost[i-item[j].first]+item[j].second);
			Max=max(Max,cost[i]);
		}
	}
	return Max;
}
int main(){
    faster();
    test(){
        int n,v; cin>>n>>v;
        int a[n],c[n];
		vector<pair<int,int>> item;
		For(i,0,n) cin>>a[i];
		For(i,0,n) cin>>c[i];
		For(i,0,n){
			item.push_back(pair<int,int>(a[i],c[i]));
		}
		cout<<Find(item,n,v)<<endl;
    }
}