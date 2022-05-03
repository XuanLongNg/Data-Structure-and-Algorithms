/*
Cho một xâu chỉ gồm các kí tự ‘(‘, ‘) và có độ dài chẵn. Hãy đếm số lượng dấu ngoặc cần phải đổi chiều ít nhất, sao cho xâu mới thu được là một dãy ngoặc đúng.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 1 xâu S có độ dài không vượt quá 100 000, chỉ gồm dấu ( và ).

Output: 

Với mỗi test, in ra đáp án tìm được trên một dòng.

Ví dụ:

Input:

4

))((

((((

(((())

)(())(((

Output
2

2

1

3
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <sstream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string k;
        int count_l=0,count_r=0,doi=0;
        cin>>k;
        if(k[0]==')') doi++;
        For(i,1,k.size()-1){
            if(k[i]==')') count_r++;
            else count_l++;
        }
        if(k[k.size()-1]=='(') doi++;
        doi+=abs(count_r-count_l)-1;
        cout<<doi<<endl;
    }
}