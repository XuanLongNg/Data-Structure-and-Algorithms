/*
Xâu ký tự S được tạo ra bằng cách bổ sung dần các ký tự chữ cái Tiếng Anh in hoa như sau.

Bước 1: Chỉ có chữ cái A
Bước 2: Thêm chữ cái B vào giữa 2 chữ A => S = "ABA"
Bước 3: Thêm chữ cái C vào giữa 2 xâu đã có ở bước 2: S = "ABACABA"
Cứ như vậy cho đến bước thứ N (0 < N < 26)

Hãy xác định ký tự thứ K trong bước biến đổi thứ N là chữ cái gì?

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 25, 1 ≤ K ≤ 2N - 1).
Output: 

Với mỗi test, in ra đáp án trên một dòng.
Ví dụ:

Input:
2

3 2

4 8
Output
B

D

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
ll X[50];
ll so[50];
ll Try(ll n,ll k){
    if(k-1==so[n-1]) return n;
    else if(k-1<so[n-1]) return Try(n-1,k);
    else return Try(n-1,k-1-so[n-1]);
}
int main(){
    int t; cin>>t;
    X[0]=1;
    so[0]=0;
    For(i,1,50){
        X[i]=X[i-1]*2+1;
        so[i]=X[i-1];
    }
    while(t--){
        ll n,k; cin>>n>>k;
        cout<<(char)(Try(n,k)+'A'-1)<<endl;
    }
}