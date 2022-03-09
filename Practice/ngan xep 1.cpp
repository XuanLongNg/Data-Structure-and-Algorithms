/*
Cho một ngăn xếp các số nguyên. Các thao tác gồm 3 lệnh: push, pop và show. Trong đó thao tác push kèm theo một giá trị cần thêm (không quá 1000). Hãy viết chương trình ghi ra kết quả của các lệnh show.

Input: Gồm nhiều dòng, mỗi dòng chứa một lệnh push, pop hoặc show. Input đảm bảo số lượng phần tử trong stack khi nhiều nhất cũng không vượt quá 200.

Output: Ghi ra màn hình các phần tử đang có trong stack theo thứ tự lưu trữ mỗi khi gặp lệnh show. Các số viết cách nhau đúng một khoảng trống. Nếu trong stack không còn gì thì in ra dòng “empty”

Ví dụ:

Input

push 3

push 5

show

push 7

show

pop

pop

show

Output
3 5

3 5 7

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
void show(std::stack<string> a){
    if(a.empty()){
        cout<<"empty"<<endl;
        return;
    }
    stack<string>b;
    while(!a.empty()){
        b.push(a.top());
        a.pop();
    }
    while(!b.empty()){
        cout<<b.top()<<" ";
        b.pop();
    }
    cout<<endl;
}
int main(){
    stack<string>a;
    string k;
    while(getline(cin,k)){
        stringstream s(k);
        string token[2];
        int i=0;
        while(s>>token[i]){
            i++;
        }
        if(token[0]=="push") a.push(token[1]);
        else if(token[0]=="pop") a.pop();
        else if(token[0]=="show") show(a);
    }
}