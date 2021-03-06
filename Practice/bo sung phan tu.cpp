/*
Cho mảng A[] gồm n số nguyên dương. Gọi L, R là max và min các phần tử của A[]. Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, A[i] ≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

2
5
4 5 3 8 6
3
2 1 3

Output:
1
0
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
        int n,k,i; cin>>n;
        map<int, int>a;
        For(i,0,n){
            cin>>k;
            a[k]++;
        }
        k=0;
        int pre,next;
        map<int,int>::iterator it;
        it=a.begin();
        pre=it->first;
        it++;
        for(it;it!=a.end();it++){
            next=it->first;
            int h=next-pre;
            if(h!=1) k+=h-1;
            pre=it->first;
        }
        cout<<k<<endl;
    }
}
