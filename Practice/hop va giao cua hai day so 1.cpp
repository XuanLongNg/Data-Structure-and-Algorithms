/*
Cho mảng A[] gồm n phần tử, mảng B[] gồm m phần tử khác nhau. Các phần tử của mảng A[] và B[] đã được sắp xếp. Hãy tìm mảng hợp và giao được sắp giữa A[] và B[]. Ví dụ với A[] = {1, 3, 4, 5, 7}, B[]={2, 3, 5, 6} ta có mảng hợp Union = {1, 2, 3, 4, 5, 6, 7}, mảng giao Intersection = {3, 5}. In ra đáp án theo giá trị phần tử từ nhỏ đến lớn.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m là số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A [i] của mảng A [];dòng tiếp theo là m số B[i] của mảng B[]; các số được viết cách nhau một vài khoảng trống.
T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m, A[i], B[i] ≤105.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
*/
#include <iostream>
#include <algorithm>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool binary_search(int *a,int n,int k){
    int l=0,r=n-1,mid;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return a[l]==k;
}
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
void Union(int *a,int *b,int n,int m){
    int c[200002],k=n;
    For(i,0,n) c[i]=a[i];
    For(i,0,m){
        if(binary_search(a,n,b[i])==0){
            c[k]=b[i];
            k++;
        }
    }
    sort(c,c+k);
    display(c,k);
}
void Intersection(int *a,int *b,int n,int m){
    int c[200002],k=0;
    For(i,0,m){
        if(binary_search(a,n,b[i])==1){
            c[k]=b[i];
            k++;
        }
    }
    sort(c,c+k);
    display(c,k);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int a[100001],b[100001];
        For(i,0,n)
        cin>>a[i];
        For(i,0,m)
        cin>>b[i];
        Union(a,b,n,m);
        Intersection(a,b,n,m);
    }
}