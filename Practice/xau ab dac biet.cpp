/*
Một xâu kí tự S = (s1, s2, .., sn) được gọi là xâu AB độ dài n nếu với mọi siÎS thì si hoặc là kí tự A hoặc si là kí tự B . Ví dụ xâu S = “ABABABAB” là một xâu AB độ dài 8. Cho số tự nhiên N và số tự nhiên K (1£K<N£15 được nhập từ bàn phím), hãy viết chương trình liệt kê tất cả các xâu AB có độ dài N chứa duy nhất một dãy K kí tự A liên tiếp.

Dữ liệu vào chỉ có một dòng ghi hai số N và K.

Kết quả ghi ra màn hình theo khuôn dạng:

Dòng đầu tiên ghi lại số các xâu AB thỏa mãn yêu cầu bài toán;
Những dòng kế tiếp, mỗi dòng ghi lại một xâu AB thỏa mãn. Các xâu được ghi ra theo thứ tự từ điển.
Ví dụ:

INPUT
5 3
OUTPUT

 5

AAABA

AAABB

ABAAA

BAAAB

BBAAA
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
#define pii pair<int,int>
using namespace std;
int n,k;
int ans=0;
vec(string) ans_str;
void OUT(string h){
    int Count=0,save=0;
    For(i,0,h.size())
    if(h[i]=='A') Count++;
    else{
        if(Count==k) save++;
        Count=0;
    }
    if(Count==k) save++;
    if(save==1){
        ans++;
        ans_str.push_back(h);
    }
}
void Try(int i,string h){
    if(i==n){
        OUT(h);
        return;
    }
    For(j,0,2){
        Try(i+1,h+(j==0?"A":"B"));
    }
}
int main(){
    cin>>n>>k;
    Try(0,"");
    cout<<ans<<endl;
    For(i,0,ans_str.size()) cout<<ans_str[i]<<endl;
}