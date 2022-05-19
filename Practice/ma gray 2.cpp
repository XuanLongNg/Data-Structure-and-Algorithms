/*
Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray. Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít. Ví dụ với n=3 ta có 23 mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. Hãy viết chương trình chuyển đổi một xâu mã Gray X có độ dài n thành một xâu mã nhị phân.

Input::

Dòng đầu tiên là số lượng test T.
T dòng kế tiếp ghi lại mỗi dòng một test. Mỗi test là một xâu mã Gray độ dài n.
T, n thỏa mãn ràng buộc: 1≤T, n≤10.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:
2

01101

01011
Output:

01001

01101
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
string k;
string XOR(string h){
    string ans=h;
    ans[0]=h[0]=='0'?'0':'1';
    For(i,1,h.size()){
        if(h[i]=='0') ans[i]=ans[i-1]=='0'?'0':'1';
        else ans[i]=ans[i-1]=='1'?'0':'1';
    }
    return ans;
}
int main(){
    faster();
    test(){
        cin>>k;
        cout<<XOR(k)<<endl;
    }
}