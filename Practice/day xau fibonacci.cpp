/*
Một dãy xâu ký tự G chỉ bao gồm các chữ cái A và B được gọi là dãy xâu Fibonacci nếu thỏa mãn tính chất:    G(1) = A; G(2) = B; G(n) = G(n-2)+G(n-1). Với phép cộng (+) là phép nối hai xâu với nhau.  Bài toán đặt ra là tìm ký tự ở vị trí thứ i (tính từ 1) của xâu Fibonacci thứ n.

Dữ liệu vào: Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng 2 số nguyên N và i (1<N<93). Số i đảm bảo trong phạm vi của xâu G(N) và không quá 18 chữ số. Kết quả: Ghi ra màn hình kết quả tương ứng với từng bộ test.

Input
2

6 4

8 19
Output
A

B
*/
/*
Người ta tạo ra một dãy xâu ký tự nhị phân X[] trong đó:

X[1] = “0”

X[2] = “1”

X[i] = X[i-2] + X[i-1] với i>2

Với phép cộng (+) là phép nối hai xâu với nhau. 

Cho hai số tự nhiên N và K (1<N<93; K đảm bảo trong phạm vi của xâu X[N]).

Hãy xác định ký tự thứ K trong xâu X[N] là ký tự ‘0’ hay ký tự ‘1’.

Input: Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng 2 số nguyên N và K.

Output: Ghi ra màn hình kết quả tương ứng với từng bộ test.

Ví dụ:

Input

Output

2

3 1

4 3
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
ll X[93];
string Try(ll n,ll k){
    if(n==1) return "A";
    if(n==2) return "B";
    if(k<=X[n-2]) return Try(n-2,k);
    else return Try(n-1,k-X[n-2]);
}
int main(){
    int t; cin>>t;
    X[0]=0;
    X[1]=1;
    For(i,2,93){
        X[i]=X[i-2]+X[i-1];
    }
    while(t--){
        ll n,k; cin>>n>>k;
        cout<<Try(n,k)<<endl;
    }
}

