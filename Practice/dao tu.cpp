/*
Cho xâu ký tự S. Nhiệm vụ của bạn là đảo ngược các từ trong S. Ví dụ S =  “I like this program very much”, ta nhận được kết quả là “much very program this like I”.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là một xâu ký tự S.
T, S thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ Length(S)≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input:
2
I like this program very much

much very program this like I
Output:



much very program this like I
I like this program very much
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
int main(){
    faster();
    int t; cin>>t;
    cin.ignore();
    while(t--){
        stack<string> k;
        string h,token;
        getline(cin,h);
        stringstream s(h);
        while(s>>token){
            k.push(token);
        }
        while(!k.empty()){
            cout<<k.top()<<" ";
            k.pop();
        }
        cout<<endl;
    }
}