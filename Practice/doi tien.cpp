/*
Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Tổng số tiền cần đổi có giá trị bằng N.  Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 50).  Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).

Output:  Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:

Input:
2

70

121
Output
2

3

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
int money[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int doitien(int n){
    int count=0,i=9;
    while(n>0&&i>=0){
        int k=n-money[i];
        if(k>=0){
            n=k;
            count++;
        }else i--;
    } 
    return count;
}
void process(){
    int n; cin>>n;
    cout<<doitien(n)<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        process();
    }
}