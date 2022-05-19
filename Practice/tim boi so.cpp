/*
Cho số nguyên N. Nhiệm vụ của bạn cần tìm số nguyên X nhỏ nhất là bội của N, và X chỉ chứa hai chữ số 0 và 9.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 10000). Mỗi bộ test chứa số nguyên N trên một dòng (1 ≤ N ≤ 500).

Output:  Với mỗi test in ra đáp án tìm được trên một dòng.

Ví dụ:
Input
3

2

5

11
Output
90

90

99

 

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
int n,k;
vll a;
void Try(int i,ll ans){
    a.push_back(ans);
    if(i==18){
        return;
    }
    For(j,0,2){
        Try(i+1,ans*10+(j==0?0:9));
    }
}
int main(){
    faster();
    Try(0,0);
    sort(a.begin(),a.end());
    test(){
        cin>>n;
        for(auto i:a)
        if(i%n==0&&i!=0){
            cout<<i<<endl;
            break;
        }
    }
}