/*
Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân trước của X[]. Ví dụ X[] =”111111” thì xâu nhị phân trước của X[] là “111110”. Với xâu X[] =“000001” thì xâu nhị trước của X[] là “000000”. Chú ý: nếu xâu dữ liệu trong input là xâu đầu tiên thì trước nó sẽ là xâu cuối cùng.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
T, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input

2

010101

111111

Output
010100

111110
*/
#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void pre_binary(string &a,int n){
    int i=n-1;
    while(i>=0&&a[i]!='1') i--;
    if(a[i]==0){
        For(j,0,n) a[j]='1';
    }else{
        a[i]='0';
        For(j,i+1,n) a[j]='1'; 
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        string k; cin>>k;
        int n=k.size();
        pre_binary(k,n);
        cout<<k<<endl;
    }
}
