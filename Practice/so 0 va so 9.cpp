/*
Cho số tự nhiên N. Hãy tìm số nguyên dương X nhỏ nhất được tạo bởi số 9 và số 0 chia hết cho N. Ví dụ với N = 5 ta sẽ tìm ra  X = 90.

Input:

Dòng đầu tiên ghi lại số lượng test T (T≤100).
Những dòng kế tiếp mỗi dòng ghi lại một test. Mỗi test là một số tự nhiên N được ghi trên một dòng (N≤100).
Output:

Đưa ra theo từng dòng số X nhỏ nhất chia hết cho N tìm được .
Ví dụ:

Input
2

5

7
Output
90

9009
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
void check(int i,int &n){
    stack<int> h;
    while(i){
        if(i%2==0) h.push(0);
        else h.push(9);
        i/=2;
    }
    ll k=0;
    while(!h.empty()){
        k=k*10+h.top();
        h.pop();
    }
    if(k%n==0){
        cout<<k;
        n=0;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,i=1; cin>>n;
        while(n){
            check(i,n);
            i++;
        }
        cout<<endl;
    }
}

