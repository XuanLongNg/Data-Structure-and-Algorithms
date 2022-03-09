/*
Cho số nguyên dương (1<N<40) và số nguyên dương K<N. Với 1 tổ hợp chập K phần tử của N, hãy cho biết tổ hợp tiếp theo sẽ có bao nhiêu phần tử mới. Nếu tổ hợp đã cho là cuối cùng thì kết quả là K.  

Dữ liệu vào: Dòng đầu ghi số bộ test, không quá 20. Mỗi bộ test viết trên hai dòng

Dòng 1: hai số nguyên dương N và K (K<N)
Dòng 2 ghi K số của tổ hợp ban đầu. Theo đúng thứ tự tăng dần, không có số nào trùng nhau.
Kết quả: Với mỗi bộ dữ liệu in ra số lượng phần tử mới.
INPUT

3

5 3

1 3 5

5 3

1 4 5

6 4

3 4 5 6

OUTPUT
1

2

4
*/
#include <iostream>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void check(int *a,int *b,int n,int &h){
    For(i,0,n){
        For(j,0,n){
            if(a[i]==b[j]){
                h++;
                break;
            }
        }
    }
    h=n-h;
}
void next_combination(int *a,int n,int k,int &h){
    int i=k-1;
    while(i>0&&a[i]==n-k+i+1) i--;
    if(a[0]==n-k+1){
        h=k;
    }else{
        a[i]++;
        For(j,i+1,k) a[j]=a[i]-i+j;
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k,h=0; cin>>n>>k;
        int a[40],b[40];
        For(i,0,k){
            cin>>a[i];
            b[i]=a[i];
        }
        next_combination(a,n,k,h);
        if(h!=k) check(a,b,k,h);
        cout<<h<<endl;
    }
}