/*
Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. Lỗi duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại.  Cho hai số, A và B, tính tổng nhỏ nhất và lớn nhất mà Tèo có thể nhận được.

Input: Có một dòng chứa hai số nguyên dương A và B ( 1 ≤ A, B ≤ 1 000 000).

Output: In ra 2 số nguyên cách nhau một dấu cách, tổng nhỏ nhất và lớn nhất có thể nhận được.

Test 1: 
Input:
11 25

Ouput:
36 37

Test 2:
Input:
1430 4862

Ouput:
6282 6292

Test 3: 
Input:
16796 58786

Ouput:
74580 85582
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
string chuyen5_6(string k){
    For(i,0,k.size())
    if(k[i]=='5') k[i]='6';
    return k;
}
string chuyen6_5(string k){
    For(i,0,k.size())
    if(k[i]=='6') k[i]='5';
    return k;
}
int to_Int(string k){
    int total=0;
    For(i,0,k.size())
    total=total*10+k[i]-'0';
    return total;
}
void nham_chu_so(int a,int b){
    int max,min;
    string a1=to_string(a),b1=to_string(b);
    a1=chuyen5_6(a1); b1=chuyen5_6(b1);
    a=to_Int(a1); b=to_Int(b1);
    max=a+b;
    a1=to_string(a); b1=to_string(b);
    a1=chuyen6_5(a1); b1=chuyen6_5(b1);
    a=to_Int(a1); b=to_Int(b1);
    min=a+b;
    cout<<min<<" "<<max<<endl;
}
int main(){
    int a,b; cin>>a>>b;
    nham_chu_so(a,b);
}