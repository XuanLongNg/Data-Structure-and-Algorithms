/*
Một xâu nhị phân độ dài n được gọi là thuận nghịch hay đối xứng nếu đảo ngược xâu nhị phân đó ta vẫn nhận được chính nó. Cho số tự nhiên n (n nhập từ bàn phím). Hãy viết chương trình liệt kê tất cả các xâu nhị phân thuận nghịch có độ dài n.  Hai phần tử khác nhau của xâu thuận nghịch được ghi cách nhau một vài khoảng trống.

Ví dụ với n = 4 ta tìm được 4 xâu nhị phân thuận nghịch như dưới đây.
    0   0   0   0         
    0   1   1   0         
    1   0   0   1         
    1   1   1   1
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void display(int *a,int  n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
bool Rev(int *a,int n){
    For(i,0,n/2){
        if(a[i]!=a[n-i-1]) return 0;
    }
    return 1;
}
void Try(int *a,int n,int i){
    For(j,0,2){
        a[i]=j;
        if(i==n-1){
            if(Rev(a,n)==1) display(a,n);
        }else Try(a,n,i+1);
    }
}
int main(){
    int a[100]={1,2,3},n;
    cin>>n;
    Try(a,n,0);
    return 0;
}