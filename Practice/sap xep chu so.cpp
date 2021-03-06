/*
Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao gồm các chữ số của mỗi phần tử trong A[]. Ví dụ A[] = {110, 111, 112, 113, 114 }ta có kết quả là {0, 1, 2, 3, 4}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤107; 0≤ A[i] ≤1016.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

2
3
131 11 48
4
111 222 333 446

Output:
1 3 4 8
1 2 3 4 6
*/
#include <iostream>
#include <algorithm>
#include <map>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
void tach(int a,std::map<int,int> &k){
    int b=a,c;
    while(b){
        c=b%10;
        b/=10;
        k[c]++;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        map<int, int> k;
        For(i,0,n) cin>>a[i];
        For(i,0,n) tach(a[i],k);
        map<int, int>::iterator it;
        for(it=k.begin();it!=k.end();it++)
        cout<<it->first<<" ";
        cout<<endl;
    }
}