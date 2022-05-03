/*
Cho tập các số A[] = (a1, a2, .., an). Hãy kiểm tra xem ta có thể chia tập A[] thành hai tập con sao cho tổng các phần tử của hai tập con bằng nhau hay không. Đưa ra YES nếu có thể thực hiện được, ngược lại đưa ra NO.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N phần tử của dãy số A[].
T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤100; 1≤ A[i] ≤100.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input
2
4
1 5 11 5
3
1 3 5 
Output
YES
NO

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
vector<bool> check;
int a[100];
int total=0;
bool ans=0;
void Try(int n,int i,int total1){
    if(i==n||ans==1) return;
    For(j,0,n){
        if(!check[j]&&!ans){
            check[j]=1;
            total1+=a[j];
            if(total1==total/2) ans=1;
            else if(total1<=total/2) Try(n,i+1,total1);
            total1-=a[j];
            check[j]=0;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){ 
        int n; cin>>n;
        total=0;
        ans=0;
        check.resize(n,0);
        For(i,0,n){
            cin>>a[i];
            total+=a[i];
        }
        if(total%2==1) ans=0;
        else Try(n,0,0);
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}