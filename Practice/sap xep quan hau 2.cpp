/*
Cho một bàn cờ 8 x 8, mỗi ô có một giá trị A[i][j] nhất định (0 ≤ A[i][j] ≤ 100), tương ứng với điểm số đạt được nếu như bạn đặt một quân cờ vào đó.

Nhiệm vụ của bạn là đặt 8 quân hậu lên bàn cờ, sao cho không có 2 quân nào ăn nhau, và số điểm đạt được là lớn nhất.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 8 dòng, mỗi dòng 8 số nguyên mô tả bàn cờ.

Output:  Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:

Input
1

1 2 3 4 5 6 7 8

9 10 11 12 13 14 15 16

17 18 19 20 21 22 23 24

25 26 27 28 29 30 31 32

33 34 35 36 37 38 39 40

41 42 43 44 45 46 47 48

48 50 51 52 53 54 55 56

57 58 59 60 61 62 63 64
Output
260

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
int Max;
int matrix[8][8];
bool check[8],nguoc[15],xuoi[15];
void OUT(){
    For(i,0,8){
        For(j,0,8) cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
}
void Try(int i,int total){
    if(i==8){
        Max=max(Max,total);
        return;
    }
    For(j,0,8){
        if(!check[j]&&!nguoc[i+j]&&!xuoi[i-j+7]){
            check[j] = true;
            nguoc[i+j] = true;
            xuoi[i-j+7]= true;
            Try(i+1,total+matrix[i][j]);
            check[j] = false;
            nguoc[i+j] = false;
            xuoi[i-j+7]= false;
        }
    }
}
void Set(){
    Max=0;
    memset(xuoi,0,15);
    memset(check,0,8);
    memset(nguoc,0,15);
}
int main(){
    faster();
    test(){
        Set();
        For(i,0,8)
        For(j,0,8) cin>>matrix[i][j];
        Try(0,0);
        cout<<Max<<endl;
    }
}

