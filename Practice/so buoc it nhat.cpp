/*
Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤1000; 1≤A[i] ≤1000.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
1
7
2 3 5 1 4 7 6
Output
3

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
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        For(i,0,n){
            cin>>a[i];
            
        }
        vector<int> F;
        F.resize(n+1,0);
        int k=1;
        F[0]=0;
        For(i,1,n+1){
            F[i]=1;
            for(int j=i-1;j>=1;j--)
                if(a[j-1]<=a[i-1]){
                    F[i]=max(F[i],F[j]+1);
                }
            k=max(F[i],k);
        }
        cout<<n-k<<endl;
    }
}
