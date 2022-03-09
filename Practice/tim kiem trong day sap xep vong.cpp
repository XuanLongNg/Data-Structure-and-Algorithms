/*
Một mảng được sắp được chia thành hai đoạn tăng dần được gọi là mảng sắp xếp vòng. Ví dụ mảng A[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3, 4} là mảng sắp xếp vòng. Cho mảng A[] gồm n phần tử, hãy tìm vị trí của phần tử x trong mảng A[] với thời gian log(n).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n và x; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
T, n, A[i], x  thỏa mãn ràng buộc: 1≤T≤100; 1≤N, x, A[i] ≤107.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

2
10 3
5 6 7 8 9 10 1 2 3 4
10 3
1 2 3 4 5 6 7 8 9 10

Output:
9

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
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
int binary_search(int *a,int n,int k){
    int l=0,r=n-1,mid;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    if(a[l]==k) return l;
    return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k,h=0; cin>>n>>k;
        int a[n];
        For(i,0,n){
            cin>>a[i];
            if(a[i]<a[i-1]) h=i;
        }
        sort(a,a+n);
        if(binary_search(a,n,k)!=-1){
            int check=binary_search(a,n,k)+h+1;
            if(check>n) check-=n;
            cout<<check;
        }
        else cout<<"-1";
        cout<<endl;
    }
}
