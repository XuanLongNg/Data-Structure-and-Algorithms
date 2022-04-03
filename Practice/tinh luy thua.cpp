/*
Cho hai số nguyên không âm a và b. Hãy tính ab.

Nếu kết quả quá lớn hãy chia dư cho 109 + 7.

Input

Gồm không quá 20 bộ test, mỗi test ghi trên một dòng hai số a,b; a không quá 9 chữ số, b không quá 18 chữ số.

Input kết thúc khi a = b = 0

Output

Với mỗi test ghi ra kết quả tính được trên một dòng.

Ví dụ

Input

Output

2 3

2 4

3 2

0 0
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
ll Pow(ll a,ll b){
    if(b==0) return 1;
    if(b%2==0){
        ll k=Pow(a,b/2);
        return k*k%Mod;
    }else return a*Pow(a,b-1)%Mod;
}
int main(){
    ll a, b;
    while(1){
        cin>>a>>b;
        if(a==b&&a==0) return 0;
        cout<<Pow(a,b)<<endl;
    }
}