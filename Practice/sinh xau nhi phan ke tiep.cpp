/*
Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X[]. Ví dụ X[] =”010101” thì xâu nhị phân tiếp theo của X[] là “010110”.

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

010110

000000
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void next_binary(int *a,int n){
    int i=n-1;
    while(i>0&&a[i]==1) i--;
    if(a[i]==1){
        For(i,0,n) a[i]=0;
    }else{
        a[i]=1;
        For(j,i+1,n) a[j]=0;
    }    
}
void to_int(string k,int *a){
    For(i,0,k.size()){
        a[i]=k[i]-'0';
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        string k; cin>>k;
        int a[1001],n;
        to_int(k,a);
        n=k.size();
        next_binary(a,n);
        For(i,0,n) cout<<a[i];
        cout<<endl;
    }
}
