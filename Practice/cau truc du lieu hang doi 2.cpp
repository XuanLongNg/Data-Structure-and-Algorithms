/*
Yêu cầu bạn xây dựng một queue với các truy vấn sau đây:

“PUSH x”: Thêm phần tử x vào cuối của queue (0 ≤ x ≤ 1000).

“PRINTFRONT”: In ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

“POP”: Xóa phần tử ở đầu của queue. Nếu queue rỗng, không làm gì cả.

Dữ liệu vào:

Dòng đầu tiên là số lượng truy vấn Q (Q ≤ 100000).

Mỗi truy vấn có dạng như trên.

Kết quả:

 

Với mỗi truy vấn “PRINT”, hãy in ra phần tử đầu tiên của queue. Nếu queue rỗng, in ra “NONE”.

Ví dụ:

 

 

Input

9

PUSH 1

PUSH 2

POP

PRINTFRONT

PUSH 3

PRINTFRONT

POP

POP

PRINTFRONT

Output

2

2

NONE
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <sstream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
queue<int> Que;
void check(string k,int x){
    if(k=="PRINTFRONT")
        if(Que.empty()) cout<<"NONE"<<endl;
        else cout<<Que.front()<<endl;
    else if(k=="POP"&&!Que.empty()) Que.pop();
    else if(k=="PUSH"){
        cin>>x; Que.push(x);
    }
}
void clear(){
    while(!Que.empty()) Que.pop();
}
int main(){
    int n; cin>>n;
    while(n--){
        string k; cin>>k;
        int x;
        check(k,x);
    }
}