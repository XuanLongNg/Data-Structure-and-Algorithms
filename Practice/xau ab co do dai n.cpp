/*
Xâu ký tự str được gọi là xâu AB nếu mỗi ký tự trong xâu hoặc là ký tự ‘A’ hoặc là ký tự ‘B’. Ví dụ xâu str=”ABBABB” là xâu AB độ dài 6. Nhiệm vụ của bạn là hãy liệt kê tất cả các xâu AB có độ dài n.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên n.
T, n thỏa mãn ràng buộc: 1≤T≤10; 1≤n≤10.
Output:

Đưa ra kết quả mỗi test theo từng dòng. Mỗi xâu cách nhau 1 khoảng trống.

Input

2

2

3

Output
AA AB BA BB

AAA AAB ABA ABB BAA BAB BBA BBB
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void display(char *a,int n){
    For(i,0,n) cout<<a[i];
    cout<<" ";
}
bool check[10];
void Try(char *a,int n,int i){
    For(j,0,2){
        a[i]=j+'A';
        if(i==n-1) display(a,n);
        else Try(a,n,i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        char a[10];
        Try(a,n,0);
        cout<<endl;
    }
}