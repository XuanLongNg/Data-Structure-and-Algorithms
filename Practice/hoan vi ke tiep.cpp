/*
Cho số tự nhiên N và một hoán vị X[] của 1, 2, .., N. Nhiệm vụ của bạn là đưa ra hoán vị tiếp theo của X[]. Ví dụ N=5, X[] = {1, 2, 3, 4, 5} thì hoán vị tiếp theo của X[] là {1, 2, 3, 5, 4}.

Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số N; dòng tiếp theo đưa vào hoán vị X[] của 1, 2, .., N.
T, N, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

Input

2

5 

1  2  3  4  5

5

5  4  3  2  1

Output

1 2  3  5  4

1 2  3  4  5
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void next_permutation(int *a,int n){
    int i=n-2;
    while(i>0&&a[i]>a[i+1]) i--;
    if(a[i]==n&&i==0){
        For(i,0,n) a[i]=i+1;
    }else{
        int k=n-1;
        while(a[i]>a[k]) k--;
        swap(a[i],a[k]);
        int l=i+1,r=n-1;
        while(l<r){
            swap(a[l],a[r]);
            l++; r--;
        }
    }    
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[1001];
        For(i,0,n) cin>>a[i];
        next_permutation(a,n);
        For(i,0,n) cout<<a[i]<<" ";
        cout<<endl;
    }
}
