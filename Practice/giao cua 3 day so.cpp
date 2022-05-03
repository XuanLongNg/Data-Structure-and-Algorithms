/*
Cho ba dãy số A[], B[], C[] gồm N1, N2, N3 phần tử đã được sắp xếp. Hãy đưa ra các phần tử có mặt trong cả ba dãy theo thứ tự tăng dần. Nếu không có đáp án, in ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm bốn dòng: dòng thứ nhất đưa vào N1, N2, N3 là số phần tử của mảng A[], B[], C[]; các dòng tiếp theo đưa vào 3 dãy A[], B[], C[].
Ràng buộc: 1≤T≤100; 1≤ N1, N2, N3 ≤106, 0≤ A[i], B[j], C[k] ≤1018.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

 

Input:
1
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120
Output:

20 80
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
void nhap(vll &a,int n){
    ll k;
    For(i,0,n){
        cin>>k;
        a.push_back(k);
    }
}
void giao(vll a, vll b, vll &ans){
    int i=0,j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++; j++;
        }else if(a[i]>b[j]) j++;
        else i++;
    }
}
void Try(){
    ll n,m,k,temp; cin>>n>>m>>k;
    vll a,b,c;
    nhap(a,n);
    nhap(b,m);
    nhap(c,k);
    vll ans1, ans2;
    giao(a,b,ans1);
    giao(ans1,c,ans2);
    if(ans2.size()==0) cout<<"-1";
    else{
        For(i,0,ans2.size()) cout<<ans2[i]<<" ";
    }
    cout<<endl;
};
int main(){
    int t; cin>>t;
    while(t--){
        Try();
    }
}