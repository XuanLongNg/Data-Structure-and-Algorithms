/*
Ban đầu dãy số A[] gồm N phần tử đã được sắp xếp tăng dần. Các phần tử của dãy A[] có thể giống nhau. Sau đó ta thực hiện quay vòng phải, mỗi lần lấy một ký tự ở cuối dãy đưa lên đầu dãy.

Cho trạng thái dãy số của A[] sau khi đã thực hiện quay vòng K lần. Hãy tìm K.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số M, N, K; dòng tiếp theo đưa vào N số của mảng A[]các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤107; 0≤ A[i]≤1018.
Output:

Đưa ra số lần quay vòng K của mỗi test theo từng dòng.
Ví dụ:

Input
2
5
5 1 2 3 4
5
1 2 3 4 5
Output
1
0
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
bool binary_search(ll *a,int l,int r,ll k){
    int mid;
    while(l<r){
        mid = (l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return a[l]==k;
}
int main(){
    faster();
    test(){
        int n,lct=0; cin>>n;
        ll k,Min=1e18;
        For(i,0,n){
            cin>>k;
            if(k<Min){
                Min=k;
                lct=i;
            }
        }
        cout<<lct<<endl;
    }
}
