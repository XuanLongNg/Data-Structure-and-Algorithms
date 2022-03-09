/*
Cho mảng A[] gồm n phần tử. Các phần tử của mảng A[] chỉ bao gồm các số 0, 1, 2. Hãy sắp xếp mảng A[] theo thứ tự tăng dần. Ví dụ với A[] = {0, 2, 1, 2, 0} ta kết quả A[] = {0, 0, 1, 2, 2}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A [i] của mảng A []các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ A[i] ≤2; 1≤ n ≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

Input:

2
5
0 2 1 2 0

3
0 1 0

Output:
0 0 1 2 2

0 1
*/
#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[1000001];
        For(i,0,n)
        cin>>a[i];
        sort(a,a+n);
        display(a,n);
    }
}