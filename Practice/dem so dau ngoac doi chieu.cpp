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
        string k; cin>>k;
        stack<char> s;
        int doi=0;
        For(i,0,k.size()){
            if(!s.empty()&&k[i]==')'&&s.top()=='(') s.pop();
            else s.push(k[i]);
        }
        while(!s.empty()){
            if(s.top()=='(') doi++;
            s.pop();
            if(s.top()==')') doi++;
            s.pop();
        }
        cout<<doi<<endl;
    }
}