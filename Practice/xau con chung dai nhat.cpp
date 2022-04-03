/*
Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này (các phần tử không nhất thiết phải liên tiếp nhau).

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.

Output:  Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.

Ví dụ:

Input
2

AGGTAB

GXTXAYB

AA

BB
Output
4

0

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

int main(){
    int t; cin>>t;
    while(t--){
        string a,b; cin>>a>>b;
        int max1=0;
        int F[a.size()+1][b.size()+1];
        For(i,0,a.size()+1)
            For(j,0,b.size()+1) F[i][j]=0;
        For(i,1,a.size()+1)
            For(j,1,b.size()+1){
                if(a[i-1]==b[j-1]) 
                    F[i][j]=F[i-1][j-1]+1;
                else 
                    F[i][j]=max(F[i][j-1],F[i-1][j]);
                max1=max(max1,F[i][j]);
        }
        cout<<max1<<endl;
    }
}