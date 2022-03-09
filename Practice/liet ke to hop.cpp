/*
Cho dãy số A[] có N phần tử. Hãy liệt kê tất cả các tổ hợp chập K của tập các phần tử khác nhau trong A[]. Các tổ hợp cần liệt kê theo thứ tự từ điển (tức là trong mỗi tổ hợp thì giá trị từ nhỏ đến lớn, và tổ hợp sau lớn hơn tổ hợp trước).

Input

Dòng đầu ghi hai số N và K.

Dòng thứ 2 ghi N số của mảng A[]. Các giá trị không quá 1000.

Dữ liệu đảm bảo số phần tử khác nhau của A[] không quá 20 và K không quá 10.

Output

Ghi ra lần lượt các tổ hợp tìm được, mỗi tổ hợp trên một dòng.

Ví dụ

Input
1 2 3

1 2 4

1 2 5

1 3 4

1 3 5

1 4 5

2 3 4

2 3 5

2 4 5

3 4 5
Output

8 3

2 4 4 3 5 1 3 4
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
int n,k;
vector<int> x;
vector<int> y;
void display(){
    For(i,0,x.size()){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
void Try(int l,int i){
    For(j,l,n-k+i+1){
        x[i]=y[j];
        if(i==k-1) display();
        else Try(j+1,i+1);
    }
}
int main(){
    cin>>n>>k;
    int h;
    map<int,int>a;
    x.resize(k);
    For(i,0,n){
        cin>>h;
        a[h]++;
    }
    map<int,int>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        y.push_back(it->first);
    } 
    n=y.size();
    Try(0,0);
}
