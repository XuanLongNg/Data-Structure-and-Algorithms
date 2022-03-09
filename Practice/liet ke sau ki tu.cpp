/*
Cho chữ cái c in hoa (‘A’ < c < ’K’) và số nguyên K (0 < K < (c – ‘A’)).

Hãy tìm cách  liệt kê tất cả các xâu ký tự khác nhau được tạo ra bởi các chữ cái tính từ ‘A’ đến ký tự c. Các ký tự được phép lặp lại nhưng không tính các xâu là hoán vị của xâu nào đó đã liệt kê trước đó.

Xem ví dụ để hiểu thêm yêu cầu đề bài.

Input

Chỉ có một dòng ghi chữ cái c và số nguyên K thỏa mãn ràng buộc đề bài.

Output

Ghi ra lần lượt các xâu ký tự kết quả theo thứ tự từ điển, mỗi xâu trên một dòng.

Ví dụ

Input
D 2
Output

AA

AB

AC

AD

BB

BC

BD

CC

CD

DD
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
char k;
int d;
char h[1000];
void display(){
    For(i,0,d) cout<<h[i];
    cout<<endl;
}
void Try(int i){
    For(j,0,k-'A'+1){
        if(h[i-1]<=j+'A'){
            h[i]=j+'A';
            if(i==d-1) display();
            else Try(i+1);
        }
    }
}
int main(){
    cin>>k>>d;
    Try(0);
}