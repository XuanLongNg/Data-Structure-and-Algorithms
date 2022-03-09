/*
Cho dãy A[] gồm N số tự nhiên khác nhau và số tự nhiên K. 
Hãy viết chương trình liệt kê tất cả các dãy con của dãy số A[] sao cho tổng các phần tử trong dãy con đó đúng bằng K. 
Dữ liệu vào trên bàn phím (n=5, K=50), 5 số dòng thứ 2 là các phần tử dãy A:
    5   50       
    5   10  15  20  25
Các dãy con thoả mãn điều kiện tìm được liệt kê trên màn hình:
Mỗi dòng ghi lại một dãy con. Hai phần tử khác nhau của dãy con được viết cách nhau bởi một  khoảng trống.
Dòng cuối cùng ghi lại số các dãy con có tổng các phần tử đúng bằng K tìm được.
    10   15   25
    5    20   25
    5    10   15   20
    3
*/
#include <iostream>
#include <algorithm>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int y=0;
int z[1000][1000];
int Count[1000];
int m;
void check(int *b,int n){
    For(i,0,n){
    	z[m][i]=b[i];
	}
	Count[m]=n;
	m++;
}
void display(){
    for(int i=m-1;i>=0;i--){
    	For(j,0,Count[i]) cout<<z[i][j]<<" ";	
    	cout<<endl;
	} 
}
void Find(int *a,int *b,int n,int k,int i,int j,int h){
    For(x,j,n){
        if(h+a[x]==k){
            b[i]=a[x];
            check(b,i+1);
            y++;
        }else if(h+a[x]<k){
            b[i]=a[x];
            Find(a,b,n,k,i+1,x+1,h+a[x]);
        }
    }
}
int main(){
    int n,k; cin>>n>>k;
    int a[n],b[n];
    For(i,0,n) cin>>a[i];
    sort(a,a+n);
    Find(a,b,n,k,0,0,0);
    display();
    cout<<y<<endl;
}