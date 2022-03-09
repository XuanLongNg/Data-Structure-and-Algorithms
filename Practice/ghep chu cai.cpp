/*
Trong 8 chữ cái Tiếng Anh đầu tiên (ABCDEFGH) thì có 2 nguyên âm là ‘A’, ‘E’, còn lại là phụ âm.

Người ta muốn ghép các chữ cái bắt đầu từ chữ cái ‘A’ cho đến chữ cái c (‘D’ <= c <= ‘H’) sao cho mỗi chữ cái được sử dụng đúng một lần và xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm.

Hãy liệt kê các xâu thỏa mãn theo thứ tự từ điển.

Input

Chỉ có một dòng ghi chữ cái c (đảm bảo từ ‘D’ đến ‘H’).

Output

Liệt kê các xâu thỏa mãn, mỗi xâu trên một dòng.

Ví dụ

Input

D
Output
ABCD

ABDC

ACBD

ACDB

ADBC

ADCB

BCDA

BDCA

CBDA

CDBA

DBCA

DCBA
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
int n;
bool check[1000];
string k1="";
bool checkK(char s){
    if(s!='A'&&s!='E') return 0;
    return 1;
}
void out(){
    For(i,1,k1.size()-1)
        if(checkK(k1[i]))
            if(!checkK(k1[i+1])&&!checkK(k1[i-1])) return;
    For(i,0,k1.size()) cout<<k1[i];
    cout<<endl;
}
void Try(int i){
    if(i==n){
        out();
        return;
    }
    For(j,0,n){
        if(!check[j]){
            check[j]=true;
            k1[i]='A'+j;
            Try(i+1);
            check[j]=false;
        }
    }
}
int main(){
    char k;
    cin>>k;
    n=k-'A'+1;
    For(i,0,n) k1+=" ";
    Try(0);
}
