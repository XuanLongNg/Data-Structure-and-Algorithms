/*
Một xâu ký tự số chỉ bao gồm các chữ số 6 và 8 sẽ được gọi là “phát lộc” nếu thỏa mãn các điều kiện sau:

Độ dài xâu ít nhất là 6
Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6
Không có 2 chữ số 8 nào ở cạnh nhau
Không có nhiều hơn 3 chữ số 6 ở cạnh nhau.
Viết chương trình liệt kê các xâu ký tự phát lộc độ dài N theo thứ tự tăng dần.

Input

Chỉ có 1 dòng ghi số N (5 < N < 16).

Output

Ghi ra các xâu ký tự phát lộc độ dài N, mỗi xâu trên một dòng.

Ví dụ

Input

6
Output
	
866686

866866

868666

868686
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<"";
    cout<<endl;
}
void check(int *a,int n){
    if(a[0]!=8) return;
    if(a[n-1]!=6) return;
    For(i,0,n-1){
        if(i<=n-4&&a[i]==a[i+1]&&a[i]==a[i+2]&&a[i]==a[i+3]&&a[i]==6) return;
        if(a[i]==a[i+1]&&a[i]==8) return;
    }
    display(a,n);
}
void Try(int *a,int n,int i){
    For(j,0,2){
        if(j==0) a[i]=6;
        else a[i]=8;
        if(i==n-1) check(a,n);
        else Try(a,n,i+1);
    }
}
int main(){
    int n; cin>>n;
    int a[n];
    Try(a,n,0);
}