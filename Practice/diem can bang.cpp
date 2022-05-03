/*
Cho dãy số A[] gồm có N phần tử nguyên dương. Phần tử thứ i được gọi là điểm cân bằng của dãy số nếu như tổng các số bên trái bằng tổng các số bên phải của nó.

Nhiệm vụ của bạn là điểm cân bằng đầu tiên của dãy A[] cho trước. Nếu không có đáp án, in ra -1.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu.

Dòng tiếp theo gồm N số nguyên A[i] (-1000 ≤ A[i] ≤ 1000).

Output: 

Với mỗi test, in ra trên một dòng vị trí của điểm cân bằng tìm được.

 

Ví dụ:

Input:
2

7

-7 1 5 2 -4 3 0

5

1 2 3 4 5
Output

4

-1

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
        int n,totalMax=0; cin>>n;
        int a[n];
        For(i,0,n){
            cin>>a[i];
            totalMax+=a[i];
        }
        int total=0,check=-1;
        For(i,1,n){
            total+=a[i-1];
            if(totalMax-total-a[i]==total){
                check=i+1;
                break;
            }
        }
        cout<<check<<endl;
    }
}