/*
Cho một bàn cờ vua có kích thước n * n, ta biết ràng quân hậu có thể di chuyển theo chiều ngang, dọc, chéo. Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ sao cho với 2 quân hậu bất kì, chúng không “ăn” nhau.

Input: Dòng đầu ghi số bộ test T (T<5). Mỗi bộ test ghi một số nguyên dương n duy nhất (không quá 10)

Output:  Ghi kết quả mỗi bộ test trên một dòng. Số cách đặt quân hậu.

Ví dụ:

Input
1

4
Output
2

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
/*
int a[10][10];
int n,m;
int Count;
void set(){
    n=0; m=0;
    Count=0;
    For(i,0,n){
        For(j,0,n) a[i][j]=0;
    }
}
void Add(int i,int j){
    int k=j,h=i;
    For(x,0,n) a[x][j]-=1;
    For(x,0,n) a[i][x]-=1;
    while(h>=0&&k>=0){
        h--; k--;
    }
    while(h<n&&k<n){
        a[h][k]-=1;
        h++; k++;
    }
    h=i;k=j;
    while(h>=0&&k<n){
        h--; k++;
    }
    while(h<n&&k>=0){
        a[h][k]-=1;
        h++; k--;
    }
    a[i][j]=i+1;
}
void Delete(int i,int j){
    int h=i,k=j;
    For(x,0,n)  a[x][j]+=1;
    For(x,0,n)  a[i][x]+=1;
    while(h>=0&&k>=0){
        h--; k--;
    }
    while(h<n&&k<n){
        a[h][k]+=1;
        h++; k++;
    }
    h=i;k=j;
    while(h>=0&&k<n){
        h--; k++;
    }
    while(h<n&&k>=0){
        a[h][k]+=1;
        h++; k--;
    }
    a[i][j]=0;
}
void Try(int i){
    if(i==n){
        Count++;
        return;
    }
    For(j,0,n){
        if(a[i][j]==0){
            Add(i,j);
            Try(i+1);
            Delete(i,j);
        }    
    }
    return;
}
*/
int Count,n;
bool a[10];
bool Xuoi[19];
bool Nguoc[19];
int x[10];
void set(){
    Count=0;
    For(i,0,n) a[i]=true;
    For(i,0,n*2-1){
        Xuoi[i]=true;
        Nguoc[i]=true;
    }
}
void display(){
    Count++;
    
}
void Try(int i){
    if(i==n){
        display();
        return;
    }
    For(j,0,n){
        if(a[j]&&Xuoi[i-j+n-1]&&Nguoc[i+j]){
            x[i]=j+1;
            a[j]=false;
            Xuoi[i-j+n-1]=false;
            Nguoc[i+j]=false;
            Try(i+1);
            a[j]=true;
            Xuoi[i-j+n-1]=true;
            Nguoc[i+j]=true;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        set();
        Try(0);
        cout<<Count<<endl;
    }
    return 0;
}
