/*
Hãy in ra tất cả các xâu nhị phân độ dài N, có K bit 1 theo thứ tự từ điển tăng dần.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm 2 số nguyên N, K (1 ≤ K ≤ N ≤ 16).

Output:  Với mỗi test, in ra đáp án tìm được, mỗi xâu in ra trên một dòng.

Input


2

4 2

3 2

Output

0011

0101

0110

1001

1010

1100

011

101

110
*/
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool check(int *a,int n,int k){
    int count=0;
    For(i,0,n)
    if(a[i]==1) count++;
    return count==k;
}
void display(int *a,int n,int k){
    if(check(a,n,k)!=0){
        For(i,0,n) cout<<a[i];
        cout<<endl; 
    } 
}

void Try(int *a,int n,int k,int i){
    For(j,0,2){
        a[i]=j;
        if(i==n-1) display(a,n,k);
        else Try(a,n,k,i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[16];
        Try(a,n,k,0);
    }
}