/*
Xét tất cả các tập hợp các số nguyên dương có các phần tử khác nhau và không lớn hơn số n cho trước. Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp bằng s?

Các tập hợp là hoán vị của nhau chỉ được tính là một.

Ví dụ với n = 9, k = 3, s = 23, {6, 8, 9} là tập hợp duy nhất thỏa mãn.

Input:  Gồm nhiều bộ test (không quá 100 test).

Mỗi bộ test gồm 3 số nguyên n, k, s với 1 ≤ n ≤ 20, 1 ≤ k ≤ 10 và 1 ≤ s ≤ 155. Input kết thúc bởi 3 số 0.

Output:  Với mỗi test in ra số lượng các tập hợp thỏa mãn điều kiện đề bài.

Ví dụ:

Input
9 3 23

9 3 22

10 3 28

16 10 107

20 8 102

20 10 105

20 10 155

3 4 3

4 2 11

0 0 0
Output
1

2

0

20

1542

5448

1

0

0

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
int ans=0;
void Try(int a,int b,int c,int i,int j,int total){
    if(i==b){
        if(total==c) ans++;
        return; 
    }
    For(x,j+1,a+1){
        Try(a,b,c,i+1,x,total+x);
    }
}
int main(){
    faster();
    int a=-1,b=-1,c=-1;
    while(1){
        ans=0;
        cin>>a>>b>>c;
        if(a==0&&b==0&&c==0) break;
        Try(a,b,c,0,0,0);
        cout<<ans<<endl;
    }
}