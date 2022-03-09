/*
Cho xâu ký tự S[] bao gồm các ký tự in hoa [A, B, …,Z]. Ta định nghĩa giá trị của xâu S[] là tổng bình phương số lần xuất hiện mỗi ký tự trong xâu. Ví dụ với xâu S[] = “AAABBCD” ta có F(S) = 32 + 22 + 12 + 12 = 15. Hãy tìm giá trị nhỏ nhất của xâu S[] sau khi loại bỏ K ký tự trong xâu.

Input:

Dòng đầu tiên đưa vào số lượng test T (T≤100).
Mỗi test được tổ chức thành 2 dòng. Dòng thứ nhất ghi lại số K. Dòng thứ 2 ghi lại xâu ký tự S[] có độ dài không vượt quá 10^6.
Output:

Đưa ra giá trị nhỏ nhất của mỗi test theo từng dòng.
Input

Output

2

0

ABCC

1

ABCC
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
queue<char> k;
map<char,ll> check;
char find_max(){
    ll Max=0;
    char g=0;
    map<char,ll>::iterator it;
    for(it=check.begin();it!=check.end();it++)
    if(it->second>Max){
        Max=it->second;
        g=it->first;
    }
    return g;
}
void Delete(){
    check[find_max()]--;
}
int main(){
    ll t; cin>>t;
    while(t--){
        ll k; cin>>k;
        string h; cin>>h;
        For(i,0,h.size()) check[h[i]]++;
        For(i,0,k){
            Delete();
        }
        ll s=0;
        map<char,ll>::iterator it;
        for(it=check.begin();it!=check.end();it++) s+=it->second*it->second;
        cout<<s<<endl;
        check.clear();
    }
}

