/*
Cho số tự nhiên K và xâu ký tự các chữ số S.  Nhiệm vụ của bạn là đưa ra số lớn nhất bằng cách thực hiện nhiều nhất K lần đổi chỗ các ký tự trong S. Ví dụ K =3 và S = “1234567” ta được “7654321”.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số K; dòng tiếp theo là xâu ký tự S.
T, K, S thỏa mãn ràng buộc: 1≤T ≤100; 1≤K≤10; 1≤.lenght(S)≤7.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input
3
4
1234567
3
3435335
2
1034
Output



7654321
5543333
4301
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
int n;
string k;
int to_int(string k,int i){
    if(i==0) return k[i]-'0';
    return 10*to_int(k,i-1)+k[i]-'0';
}
void Try(){
    int i=0,j=0,ans=to_int(k,k.size()-1);
    while(i<n){
        int Max=j;
        For(x,j+1,k.size())
        if(k[Max]<k[x]) Max=x;
        if(Max!=j){
            swap(k[j],k[Max]);
            i++;
        }
        j++;
        ans=max(ans,to_int(k,k.size()-1));
        if(j==k.size()) break;
    }
    cout<<ans<<endl;
}
int main(){
    faster();
    test(){
        cin>>n;
        cin>>k;
        Try();
    }
}

