/*
Yêu cầu bạn xây dựng một stack với các truy vấn sau đây:

“PUSH x”: Thêm phần tử x vào stack (0 ≤ x ≤ 1000).

“PRINT”: In ra phần tử đầu tiên của stack. Nếu stack rỗng, in ra “NONE”.

“POP”: Xóa phần tử đầu tiên của stack. Nếu stack rỗng, không làm gì cả.

Input:

Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).

Mỗi truy vấn có dạng như trên.

Output: 

Với mỗi truy vấn “PRINT”, hãy in ra phần tử đầu tiên của stack. Nếu stack rỗng, in ra “NONE”.

Ví dụ:

Input:

9

PUSH 1

PUSH 2

POP

PRINT

PUSH 3

PRINT

POP

POP

PRINT

Output
1

3

NONE
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
void show(std::stack<string> a){
    if(a.empty()){
        cout<<"NONE"<<endl;
        return;
    }
    cout<<a.top();
    cout<<endl;
}
int main(){
    int n; cin>>n; cin.ignore();
    stack<string>a;
    string k;
    while(n--){
        getline(cin,k);
        stringstream s(k);
        string token[2];
        int i=0;
        while(s>>token[i]){
            i++;
        }
        if(token[0]=="PUSH") a.push(token[1]);
        else if(token[0]=="POP"&&!a.empty()) a.pop();
        else if(token[0]=="PRINT") show(a);
    }
}
