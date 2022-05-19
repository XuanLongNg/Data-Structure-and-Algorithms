/*
Cho một dãy các xâu ký tự chỉ bao gồm các chữ cái in hoa từ A đến Z, trong đó các ký tự trong mỗi xâu đều đã được sắp xếp theo thứ tự từ điển và mỗi chữ cái chỉ xuất hiện nhiều nhất một lần (tức là độ dài xâu tối đa là 26). Nếu một ký tự xuất hiện trong hai xâu liên tiếp thì được coi là một lần lặp. Hãy tìm cách sắp xếp lại thứ tự các xâu sao cho số lần lặp là nhỏ nhất có thể. Ví dụ dưới đây là cùng một dãy xâu nhưng với cách sắp xếp lại thì số lần lặp chỉ còn 2.

ABC
ABEF
DEF
ABCDE
FGH

=> Số lần lặp là 6

ABEF
DEF
ABC
FGH
ABCDE

=> Số lần lặp là 2.

Input

Dòng đầu tiên ghi số N (2 ≤ N ≤ 10) là số xâu ký tự. N dòng tiếp theo, mỗi dòng ghi một xâu. 

Output

In ra trên một dòng số lần lặp nhỏ nhất có thể. 

Ví dụ

Input
5
ABC
ABEF
DEF
ABCDE
FGH
Output

2
Intput:
6
BDE
FGH
DEF
ABC
BDE
ABEF
Output
3
Intput
4
XYZ
XYZ
ABYZ
Z
Output
4
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
int n,fans=1e9;
vector<string> k;
bool xet[100];
int Count(string a,string b) {
    int a1=a.size(),a2=b.size(),i=0,j=0,ans=0;
    while(i<a1&&j<a2){
        if(a[i]==b[j]){
            ans++;
            i++; j++;
        }
        else if(a[i]<b[j]) i++;
        else j++;
    }
    return ans;
}
void Try(int i,int Min,string ans){
    if(Min>=fans) return;
    if(i==n){
        fans=min(fans,Min);
        return;
    }
    For(j,0,n){
        if(!xet[j]){
            xet[j]=1;
            int c=0;
            if(i>0){
                c=Count(k[ans[i-1]-'0'],k[j]);
            }
            Try(i+1,Min+c,ans+to_string(j));
            xet[j]=0;
        }
    }
}
int main(){
    faster();
    cin>>n;
    int ans=0;
    For(i,0,n){
        string h; cin>>h;
        k.push_back(h);
    }
    Try(0,0,"");
    cout<<fans<<endl;
}