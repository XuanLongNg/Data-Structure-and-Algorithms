/*
Hôm nay là ngày 22/02/2022. Một ngày đặc biệt. Chỉ có hai chữ số là 0 và 2. Đồng thời viết xuôi viết ngược tám chữ số ta đều được cùng một kết quả.

Nhiệm vụ của bạn trong ngày đặc biệt này là hãy liệt kê hết tất cả các ngày hợp lệ chỉ có 2 chữ số 0 và 2.

Một số chú ý:

Luôn có đủ 8 chữ số của ngảy tháng năm và hai dấu gạch chéo.
Ngày và tháng có thể có chữ số 0 ở đầu nhưng với năm thì không được phép. Tức là ta chỉ tính các ngày bắt đầu từ năm 2000 trở về sau.
Bài toán không có dữ liệu vào. Bạn chỉ cần liệt kê kết quả gồm tất cả các ngày tháng hợp lệ. Coi dãy ký tự ngày tháng là một xâu ký tự. Hãy liệt kê theo đúng thứ tự từ điển tăng dần.
*/
#include <iostream>
#include <string>
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
string a="00000000";
string k="02";
vector<string>out;
void check(){
    if(a[0]=='0'&&a[1]=='0') return;
    if(a[2]=='0'&&a[3]=='0') return;
    if(a[4]=='0') return;
    if(a[2]=='2') return;
    string b=a;
    b.insert(2,"/");
    b.insert(5,"/");
    out.push_back(b);
}
void Try(int i){
    For(j,0,2){
        a[i]=k[j];
        if(i==7) check();
        else Try(i+1);
    }
}
bool Sort(string a,string b){
    return a<b;
}
int main(){
    Try(0);
    sort(out.begin(),out.end(),Sort);
    For(i,0,out.size()) cout<<out[i]<<endl;
}
