/*
Cho hai mảng đã được sắp xếp A[] và B[] gồm N và N-1 phần tử. Các phần tử của mảng A[] chỉ khác mảng B[] một phần tử duy nhất. Hãy tìm vị trí của phần tử khác nhau giữa A[] và B[].

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số N; dòng tiếp theo đưa vào N số của mảng A[];dòng tiếp theo đưa vào N-1 số của mảng B[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤107; 0≤ A[i]≤1018.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
7
2 4 6 8 9 10 12
2 4 6 8 10 12
6
3 5 7 9 11 13
3 5 7 11 13
Output
5
4

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        queue<ll>a;
        queue<ll>b;
        ll n,m,k=-1,h; cin>>n;
        For(i,0,n){
            cin>>h;
            a.push(h);
        }
        For(i,0,n-1){
            cin>>h;
            b.push(h);
        }
        m=1;
        while(!a.empty()){
            if(a.front()==b.front()){
                a.pop();
                b.pop();
                m++;
            }else{
                break;
            }
        }
        k=m;
        cout<<k<<endl;
    }
}
