/*
Cho mảng A[] gồm n phần tử. Hãy tìm số phép đổi chỗ ít nhất giữa các phần tử của mảng để mảng A[] được sắp xếp. Ví dụ với A[] = {4, 3, 2, 1} ta cần thực hiện ít nhất 2 phép đổi chỗ: Swap(A[0], A[3]),  Swap(A[1], A[2]).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và X; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
T, n thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void Selection_Sort(int *a,int n,int &k){
    int min;
    For(i,0,n-1){
        min=i;
        For(j,i+1,n)
        if(a[j]<a[min]) min=j;
        if(a[i]!=a[min]){
            k++;
        }
        swap(a[i],a[min]);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k=0; cin>>n;
        int a[1001];
        For(i,0,n)
        cin>>a[i];
        Selection_Sort(a,n,k);
        cout<<k<<endl;
    }
}