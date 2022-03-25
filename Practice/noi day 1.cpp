/*
Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào số lượng sợi dây N; dòng tiếp theo đưa vào N số A[i] là độ dài của các sợi dây; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤106; 0≤A[i]≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
4
4 3 2 6
5
4 2 7 6 9
Output
29
62

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll k;
        ll total=0;
        priority_queue<ll,vector<ll>,greater<ll>> Queue;
        For(i,0,n){
            cin>>k;
            Queue.push(k);
        }
        while(Queue.size()>1){
            k=0;
            k+=Queue.top(); Queue.pop();
            k+=Queue.top(); Queue.pop();
            total+=k;
            Queue.push(k);
        }
        cout<<total<<endl;
    }
}
