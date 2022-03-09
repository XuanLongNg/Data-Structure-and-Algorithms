/*
Vương quốc PTIT sử dụng bảng chữ cái gồm N chữ cái Latinh viết hoa. Quy tắc đặt tên của gia đình Hoàng gia  PTIT là chọn ra K chữ cái (không trùng nhau) và sắp xếp lại theo thứ tự từ điển.

Hãy liệt kê tất cả các cái tên có thể có của gia đình Hoàng gia PTIT

Input

Dòng đầu ghi số bộ test T (không quá 10)
Mỗi bộ test ghi 2 số N và K (3 < K < N < 16)
Output

Với mỗi bộ test, ghi ra tất cả các cái tên có thể được tạo ra, mỗi kết quả viết trên một dòng.
Input
1

4 2
Output
AB

AC

AD

BC

BD

CD
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void display(char *a,int n){
    For(i,0,n) cout<<a[i];
    cout<<endl;
}
void Try(char *a,int n,int k,int i){
    For(j,0,n){
        if(a[i-1]<j+'A'){
            a[i]=j+'A';
            if(i==k-1) display(a,k);
            else Try(a,n,k,i+1);
        } 
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        char a[16];
        Try(a,n,k,0);
        cout<<endl;
    }
}

