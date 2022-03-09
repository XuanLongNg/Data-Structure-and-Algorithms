/*
Kỳ thi ICPC có K đội của PTIT tham gia và đội tuyển đang rất đau đầu không biết chọn các cái tên như thế nào cho các đội. Yêu cầu phải đảm bảo tên không có khoảng trống và không được trùng nhau. Sau khi thảo luận, có N cái tên được đề xuất (có thể bị trùng nhau). Với K<15 và 4 < N < 30.

Hãy liệt kê tất cả danh sách các tổ hợp K cái tên khác nhau có thể được tạo ra theo thứ tự từ điển.

Input

Dòng đầu ghi 2 số N và K.

Tiếp theo là 1 dòng ghi N cái tên, mỗi cái tên có độ dài không quá 15 và cách nhau một khoảng trống. Tất cả đều là ký tự in hoa.

Output

Ghi ra tất cả các tổ hợp tên có thể được lựa chọn theo thứ tự từ điển.

Tức là các tên trong mỗi tổ hợp liệt kê theo thứ tự từ điển và các tổ hợp cũng được liệt kê theo thứ tự từ điển.

Ví dụ

Input
6 2

DONG TAY NAM BAC TAY BAC
Output

BAC DONG

BAC NAM

BAC TAY

DONG NAM

DONG TAY

NAM TAY
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int n,k;
vector<string> x;
vector<string> y;
void display(){
    For(i,0,x.size()){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
void Try(int l,int i){
    For(j,l,n-k+i+1){
        x[i]=y[j];
        if(i==k-1) display();
        else Try(j+1,i+1);
    }
}
int main(){
    cin>>n>>k;
    string h;
    map<string,int>a;
    x.resize(k);
    For(i,0,n){
        cin>>h;
        a[h]++;
    }
    map<string,int>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        y.push_back(it->first);
    } 
    n=y.size();
    Try(0,0);
}
