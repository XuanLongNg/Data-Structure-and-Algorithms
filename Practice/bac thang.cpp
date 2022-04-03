/*
Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
Mỗi test gồm hai số nguyên dương N và K(1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).
Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 109+7.
Ví dụ:

Input
2

2 2

4 2
Output
2

5

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
vector<vector<int>>ans;
void set(){
    For(i,0,100+1){
        vector<int>h;
        h.resize(100000+1,1);
        ans.push_back(h);
    }
    For(i,2,100+1){
        ll total=ans[i-1][i];
        For(j,i,100000+1){
            ans[i][j]=total+1;
            if(j-i<i) ans[i][j-i]=ans[i-1][j-i];
            total-=ans[i][j-i];
            total=(total+ans[i][j])%Mod;
        } 
    }
}
int main(){
    int t; cin>>t;
    set();
    while(t--){ 
        int n,k; cin>>n>>k;
        cout<<ans[k][n]<<endl;
    }
}
