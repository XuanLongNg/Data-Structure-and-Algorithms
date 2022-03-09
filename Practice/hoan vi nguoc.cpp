/*
Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N theo thứ tự ngược. Ví dụ với N = 3 ta có kết quả: 321, 312, 231, 213, 132, 123.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
T, n thỏa mãn ràng buộc: 1≤T, N≤10.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input
2

2

3

Output
21 12 

321 312 231 213 132 123      
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void display(int *a,int n){
    For(i,0,n) cout<<a[i];
    cout<<" ";
}
bool check[10];
void Try(int *a,int n,int i){
    for(int j=n-1;j>=0;j--){
        if(check[j]==0){
            a[i]=j+1;
            check[j]=1;
            if(i==n-1) display(a,n);
            else Try(a,n,i+1);
            check[j]=0;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[10];
        Try(a,n,0);
        cout<<endl;
    }
}