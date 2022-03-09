/*
Khi chat chit vui vẻ, anh em chiến hữu thường hay gõ HAHA để thể hiện sự sảng khoái. Đôi khi cũng có thể gõ HAHAAAAA chẳng hạn cho thêm phần nhấn mạnh.

Giả sử một xâu ký tự được coi là HAHA nếu thỏa mãn các điều kiện:

Ký tự đầu tiên phải là chữ H, ký tự cuối cùng phải là chữ A
Không có hai chữ H nào liền nhau
Cho trước độ dài N, hãy liệt kê tất cả các xâu ký tự HAHA theo thứ tự từ điển.

Input

Dòng đầu ghi số bộ test T (không quá 10)
Mỗi bộ test ghi độ dài N (2 <= N < 16)
Output

Với mỗi bộ test, ghi ra tất cả các xâu HAHA tìm được theo thứ tự từ điển, mỗi xâu viết trên một dòng.
Input

2

2

4

Output

HA

HAAA

HAHA2

*/
#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
string k="AH";
void display(char *a,int n){
    For(i,0,n) cout<<a[i];
    cout<<endl;
}
void check(char *a,int n){
    if(a[0]!='H') return;
    if(a[n-1]!='A') return;
    For(i,0,n-1){
        if(a[i]==a[i+1]&&a[i]=='H') return;
    }
    display(a,n);
}
void Try(char *a,int n,int i){
    For(j,0,2){
        a[i]=k[j];
        if(i==n-1) check(a,n);
        else Try(a,n,i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char a[16];
        Try(a,n,0);
    }
}