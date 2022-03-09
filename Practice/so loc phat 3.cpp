/*
Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.

Input:

Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T<10);
T dòng kế tiếp mỗi dòng ghi số N (1<N<15).
  Output:

Dòng đầu tiên là số lượng số lộc phát tìm được. Dòng thứ hai in đáp án theo thứ tự giảm dần.
  Ví dụ:

Input
2

2

3

Output
6

88 86 68 66 8 6

14

888 886 868 866 688 686 668 666 88 86 68 66 8 6
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
void check(int n,int i){
    stack<int> h;
    while(i){
        if(i%2==0) h.push(6);
        else h.push(8);
        i/=2;
    }
    while(h.size()<n) h.push(6);
    while(!h.empty()){
        cout<<h.top();
        h.pop();
    }
    cout<<" ";
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k,count=0; cin>>n; k=n;
        while(k>=1){ 
            count+=pow(2,k);
            k--;  
        }
        cout<<count<<endl;
        while(n>=1){ 
            Fori(i,0,pow(2,n)) check(n,i);
            n--;    
        }
        cout<<endl;
    }
}
