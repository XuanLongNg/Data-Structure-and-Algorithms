/*
Cho hai số A, B ở hệ cơ số K. Hãy tính tổng hai số đó ở hệ cơ số K.

Input: Dòng đầu ghi số bộ test T (T<10). Mỗi bộ test ghi 3 số K,A,B.

            (2≤K≤10; A và B nếu biểu diễn trong hệ cơ số 10 đều nhỏ hơn 109)

Output: In ra tổng của A và B trong hệ cơ số K

Ví dụ:

Input
1

2 1 10
Output
11

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
string convert(string )
string total(string a,string b,ll k){
    string c;
    int total,nho=0;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    total=max(a.size(),b.size());
    For(i,a.size(),total) a+="0";
    For(i,b.size(),total) b+="0";
    For(i,0,total){
        int h=a[i]-'0'+b[i]-'0'+nho;
        nho=0;
        while(h>=k){
            h-=k;
            nho++;
        }
        c+=to_string(h);
    }
    reverse(c.begin(),c.end());
    return c;
}
int main(){
    int t; cin>>t;
    while(t--){
        string a,b;
        int k; cin>>k>>a>>b;
        cout<<total(a,b,k)<<endl;
    }
}