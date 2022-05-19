/*
Số nhị phân được xem là cách mặc định biểu diễn các số. Tuy nhiên, trong nhiều ứng dụng của điện tử và truyền thông lại dùng một biến thể của mã nhị phân đó là mã Gray. Mã Gray độ dài n có mã đầu tiên là n số 0, mã kế tiếp của nó là một xâu nhị phân độ dài n khác biệt với xâu trước đó một bít. Ví dụ với n=3 ta có 23 mã Gray như sau: 000, 001, 011, 010, 110, 111, 101, 100. Hãy viết chương trình liệt kê các mã Gray có độ dài n.

Input:

Dòng đầu tiên là số lượng test T.
T dòng kế tiếp ghi lại mỗi dòng một test. Mỗi test là một số tự nhiên n.
T, n thỏa mãn ràng buộc: 1≤T, n≤10.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
 

Input:
2

3

4
Output:
000 001 011 010 110 111 101 100

0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 1110 1010 1011 1001 1000
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
vec(string) a;
int n;
string XOR(string h){
    string ans="",k="0";
    For(i,0,h.size()-1) k+=h[i];
    For(i,0,h.size()){
        if(h[i]==k[i]) ans+="0";
        else ans+="1";
    }
    return ans;
}
void convert_to_gray_code(){
    For(i,1,a.size()) a[i]=XOR(a[i]);
}
void Try(int i,string k){
    if(i==n){
        a.push_back(k);
        return;
    }
    For(j,0,2){
        Try(i+1,k+to_string(j));
    }
}
int main(){
    faster();
    test(){
        cin>>n;
        Try(0,"");
        convert_to_gray_code();
        For(i,0,a.size()) cout<<a[i]<<" ";
        cout<<endl;
        a.clear();
    }
}
