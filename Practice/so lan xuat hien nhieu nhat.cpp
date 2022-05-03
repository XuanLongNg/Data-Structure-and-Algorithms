/*
Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là hãy tìm một số có tần số xuất hiện nhiều nhất, yêu cầu lớn hơn N/2 lần xuất hiện trong dãy số.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu.

Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 1 000 000).

Output: 

Với mỗi test in ra đáp án của bài toán trên một dòng. Nếu không tìm được đáp án, in ra “NO”.

Ví dụ:

Input:
2

9

3 3 4 2 4 4 2 4 4

8

3 3 4 2 4 4 2 4
Output
4

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
int main(){
    faster();
    test(){
        int n,k; cin>>n;
        map<int,int> a;
        For(i,0,n){
            cin>>k;
            a[k]++;
        }
        map<int,int>::iterator it;
        int Max=-1e9;
        for(it=a.begin();it!=a.end();it++){
            if(it->second>a[Max]&&it->second>n/2) Max=it->first;
        }
        if(Max==-1e9) cout<<"NO\n";
        else cout<<Max<<endl;
    }
}