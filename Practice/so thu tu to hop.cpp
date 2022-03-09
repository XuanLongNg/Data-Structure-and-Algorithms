/*
Cho một tổ hợp chập K của N số nguyên dương đầu tiên (2 < K < N < 15).

Hãy xác định xem đó là tổ hợp thứ bao nhiêu nếu liệt kê tất cả các tổ hợp theo thứ tự tăng dần (tính từ 1).

Input

Dòng đầu ghi số T là số bộ test (T < 10)

Mỗi bộ test gồm 2 dòng

Dòng đầu ghi 2 số nguyên dương N và K (2 < K < N < 15)
Dòng tiếp theo ghi một tổ hợp chập K của các số nguyên dương từ 1 đến N.  
Output

Với mỗi bộ test, ghi ra trên một dòng số thứ tự của tổ hợp (tính từ 1, theo thứ tự liệt kê tăng dần).

Ví dụ

Input
2

6 4

1 3 5 6

6 4

2 3 4 6
Output
9

12

*/
#include <iostream>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int n;
int k;
int m;
vector<int>a;
int b[100000];
void check(int &y){
    For(i,0,k)
    if(a[i]!=b[i]){
        m++;
        return;
    }
    cout<<m<<endl;
    y=-1;
}
void Try(int h,int i,int y){
    if(y==-1) return; 
    For(j,h,n-k+i+2){
        a[i]=j;
        if(i==k-1) check(y);
        else Try(a[i]+1,i+1,y);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        m=1;
        cin>>n>>k;
        int x;
        For(i,0,k) cin>>b[i];
        a.resize(k,0);
        Try(1,0,0);
        a.clear();
    }
}