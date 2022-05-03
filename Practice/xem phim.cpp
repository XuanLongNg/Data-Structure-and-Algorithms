/*
John có một đàn bò. Một ngày đẹp trời, anh ta quyết định mua xe tải với khả năng chở được C kg (1000 ≤ C ≤ 25000) để đưa những con bò đi xem phim. Cho số con bò là N (20 ≤ N ≤ 100) và khối lượng w[i] của từng con (đều nhỏ hơn C), hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.

Input:

Dòng 1: 2 số nguyên C và N cách nhau bởi dấu cách
Dòng 2..N+1:   Ghi lần lượt các số nguyên: w[i]
Output:

Một số nguyên là tổng khối lượng bò lớn nhất mà John có thể mang đi xem phim.
Ví dụ:

Input
259 5

81

58

42

33

61
Output
242

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
int main(){
    int c,n; cin>>c>>n;
    int w[n],Min=1e9;
    map<int,int> check;
    For(i,0,n){
        cin>>w[i];
        check[w[i]]++;
        Min=min(Min,w[i]);
    }
    bool dp[c+1]={0};
    dp[0]=1;
    For(i,0,n){
        dp[w[i]]=1;
        Fori(j,0,c+1-w[i])
        if(dp[j]&&j!=w[i]){
            dp[j+w[i]]=1;
        }else if(j==w[i]&&dp[j]){
            if(check[w[i]]>1){
                dp[j+w[i]]=1;
                check[w[i]]--;
            }
        }
    }
    Fori(j,Min,c+1)
    if(dp[j]){
        cout<<j<<endl;
        break;
    }
}