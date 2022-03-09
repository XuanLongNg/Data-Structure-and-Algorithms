/*
Cho mảng số N. Ta gọi số đảo của N là R. Hãy tìm lũy thừa R của N. Đưa ra kết quả của bài toán dưới dạng modulo với 109 + 7.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm là số N được ghi trên một dòng.
T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤1010.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
2
12
Output
4
864354781
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
ll Pow(ll a,ll b){
    if(b==0) return 1;
    if(b%2==0){
        ll k=Pow(a,b/2);
        return k*k%Mod;
    }else return a*Pow(a,b-1)%Mod;
}
int main(){
    int t; cin>>t;
    while(t--){
        ll n,k; cin>>n;
        k=Pow(n,Mod-2);
        cout<<Pow(n,k)<<endl;
    }
}

