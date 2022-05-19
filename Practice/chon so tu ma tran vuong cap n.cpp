/*
Cho ma trận vuông Ci,j cấp N (1<= i, j <= N<10) gồm N2 số tự nhiên và số tự nhiên K (các số trong ma trận không nhất thiết phải khác nhau và đều không quá 100, K không quá 104). Hãy viết chương trình lấy mỗi hàng, mỗi cột duy nhất một phần tử sao cho tổng các phần tử này đúng bằng K.

Dữ liệu vào: Dòng 1 ghi hai số N và K. N dòng tiếp theo ghi ma trận C. 

Kết quả: dòng đầu ghi số cách tìm được. Mỗi dòng tiếp theo ghi một cách theo vị trí của số đó trong lần lượt từng hàng của ma trận. Xem ví dụ để hiểu rõ hơn. 

Ví dụ:

INPUT
3 10

2 4 3

1 3 6

4 2 4
OUTPUT

2

1 3 2

3 2 1
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
int n,k,Count;
vec(vi) matrix;
vec(string) F_ans;
bool col[10];
void Try(int i,int total,string ans){
    if(i==n){
        if(total==k){
            F_ans.push_back(ans);
            Count++;
        }
        return;
    }
    For(j,0,n){
        if(!col[j]){
            col[j] = true;
            Try(i+1,total+matrix[i][j],ans+to_string(j+1)+" ");
            col[j] = false;
        }
    }
}
void Set(){
    Count=0;
    matrix.clear();
    F_ans.clear();
    memset(col,0,sizeof(col));
}
int main(){
    faster();
    Set();
    cin>>n>>k;
    int h;
    For(i,0,n){
        vi ma;
        For(j,0,n){
           cin>>h;
            ma.push_back(h);
        }
        matrix.push_back(ma);
    }
    Try(0,0,"");
    cout<<Count<<endl;
    For(i,0,Count) cout<<F_ans[i]<<endl;
}

