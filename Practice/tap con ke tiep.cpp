/*
Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X[]. Ví dụ N=5, K=3, X[] ={2, 3, 4} thì tập con tiếp theo của X[] là {2, 3, 5}.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là hai số N và K; dòng tiếp theo đưa vào K phần tử của X[] là một tập con K phần tử của 1, 2, .., N.
T, K, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤K≤N≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

Input
2

5  3

1  4  5

5  3

3  4  5
Output
2  3  4

1  2  3
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void next_combination(int *a,int n,int k){
    int i=k-1;
    while(i>0&&a[i]==n-k+i+1) i--;
    if(a[i]==n-k+i+1){
        For(j,0,k) a[j]=j+1;
    }else{
       a[i]++;
        For(j,i+1,k) a[j]=a[i]+j-i; 
    } 
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[1001],b[1001];
        For(i,0,k) cin>>a[i];
        next_combination(a,n,k);
        For(i,0,k) cout<<a[i]<<" ";
        cout<<endl;
    }
}