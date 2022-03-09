/*
Cho mảng A[] gồm n phần tử, hãy đưa ra số nhỏ nhất và số nhỏ thứ hai của mảng. Nếu không có số nhỏ thứ hai, hãy đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[]; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤107.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

2
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1  1  1

Output:

1 2

-1
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
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,h=-1,k; cin>>n;
        vector<int> a;
        For(i,0,n){
            cin>>k;
            a.push_back(k);
        }
        sort(a.begin(),a.end());
        int min1,min2;
        min1=a[0];
        For(i,1,n)
        if(a[i]!=a[i-1]){
            h=1;
            min2=a[i];
            break;
        }
        if(h==1) cout<<min1<<" "<<min2;
        else cout<<h;
        cout<<endl;
    }
}
