/*
Cho dãy số A[] gồm có N phần tử.

Một dãy con liên tiếp được gọi là dãy tam giác nếu như dãy đó tăng dần rồi lại giảm dần, hay tồn tại i, j, k sao cho A[i] ≤ A[i+1] ≤ … ≤ A[k] >= A[k+1] >= … >= A[j].

Nhiệm vụ của bạn là hãy tìm dãy con liên tiếp là dãy tam giác có độ dài lớn nhất.

Lưu ý: Dãy đơn điệu không giảm hoặc không tăng cũng là dãy tam giác.

Ví dụ A[] = {10, 20, 30, 40} là một dãy tam giác.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N(1≤ N ≤ 100 000).

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10^6).

Output: 

Với mỗi test, in ra trên một dòng là độ dài của dãy con tìm được.

 

Ví dụ:

Input:
2

6

12 4 78 90 45 23

8

20 4 1 2 3 4 2 10
Output
5

5
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
int find(vi a,int n){
    int Max=0,Count=1;
    For(i,1,n){
        if(a[i]>a[i-1]){
            if(a[i-2]>a[i-1]){
                Max=max(Count,Max);
                Count=1;
            }
            Count++;
        }else if(a[i]<a[i-1]){
            Count++;
        }else{
            Count=1;
        }
    }
    Max=max(Count,Max);
    return Max;
}
int main(){
    faster();
    test(){
        int n; cin>>n;
        vi a;
        int k;
        For(i,0,n){
            cin>>k;
            a.push_back(k);
        }
        cout<<find(a,n)<<endl;
    }
}