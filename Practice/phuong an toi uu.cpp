/*
Cho ai, ci , W, N (i =1, 2,..,N; N£100) là những số nguyên dương  và tập hợp

      

Hãy viết chương trình tìm phương án tối ưu XOPT =(x1,x2,..,xN) và giá trị tối ưu FOPT=F(XOPT) của hàm mục tiêu

; với  .

      Dữ liệu vào cho bởi file data.in theo khuôn dạng sau:

Dòng đầu tiên ghi lại số tự nhiên N và W. Hai số được viết cách nhau một vài khoảng trống;
Dòng kế tiếp ghi lại N số cj (j=1,2,..,N). Hai số được viết cách nhau một vài khoảng trống;
Dòng kế tiếp ghi lại N số aj (j=1,2,..,N). Hai số được viết cách nhau một vài khoảng trống;
Giá trị tối ưu FOPT và phương án XOPT tìm được sẽ liệt kê trên màn hình theo khuôn dạng:

Dòng đầu tiên ghi lại giá trị tối ưu FOPT;
Dòng kế tiếp ghi lại phương án tối ưu XOPT. Hai phần tử khác nhau của phương án tối ưu được viết cách nhau bởi một khoảng trống.
Ví dụ sau sẽ minh họa khuôn dạng cho file data.in  của bài toán.

Giống bài toán cái túi
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
int Max=0;
bool check[100];
int n, v;
vector<pair<int,int>> item;
string Fi_ans;
void Set(){
    memset(check,0,sizeof(check));
    Max=0;
    item.clear();
    Fi_ans="";
}
void OUT(int price){
    string ans="";
    Max=price;
    For(i,0,n) ans+=to_string(check[i])+" ";
    Fi_ans=ans;
}
void Find(int price,int total){
	For(i,0,n){
        if(total+item[i].second<=v&&!check[i]){
            check[i]=true;
            if(Max<price+item[i].first) OUT(price+item[i].first);
            Find(price+item[i].first,total+item[i].second);
            check[i]=false;
        }
    }
}
int main(){
    faster();
    Set();
    cin>>n>>v;
    int a[n],c[n];
    For(i,0,n) cin>>a[i];
	For(i,0,n) cin>>c[i];
    
	For(i,0,n){
		item.push_back(pair<int,int>(a[i],c[i]));
	}
    Find(0,0);
	cout<<Max<<endl<<Fi_ans;
}