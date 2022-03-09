/*
Cho số tự nhiên n. Hãy in ra tất cả các số nhị phân từ 1 đến n.

Input:

Dòng đầu tiên ghi lại số lượng test T (T≤100).
Mỗi test là một số tự nhiên n được ghi trên một dòng (n≤10000).
Output:

Đưa ra kết quả mỗi test trên một dòng.
Ví dụ:

Input

2

2

5
Output
1 10

1 10 11 100 101
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
void check(int i){
    stack<int> h;
    while(i){
        h.push(i%2);
        i/=2;
    }
    while(!h.empty()){
        cout<<h.top();
        h.pop();
    }
    cout<<" ";
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        For(i,1,n+1) check(i);
        cout<<endl;
    }
}
