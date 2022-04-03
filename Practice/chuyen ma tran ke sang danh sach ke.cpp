/*
Ma trận kề A của một đồ thị vô hướng là một ma trận chỉ có các số 0 hoặc 1 trong đó A[i][j] = 1 có ý nghĩa là đỉnh i kề với đỉnh j (chỉ số tính từ 1).

Danh sách kề thì liệt kê các đỉnh kề với đỉnh đó theo thứ tự tăng dần.

Hãy chuyển biểu diễn đồ thị từ dạng ma trận kề sang dạng danh sách kề.

Input: Dòng đầu tiên chứa số nguyên n – số đỉnh của đồ thị (1 < n ≤ 1000). n dòng tiếp theo, mỗi dòng có n số nguyên có giá trị 0 và 1 mô tả ma trận kề của đồ thị.

Output:  Gồm n dòng, dòng thứ i chứa các số nguyên là đỉnh có nối với đỉnh i và được sắp xếp tăng dần. Dữ liệu đảm bảo mỗi đỉnh có kết nối với ít nhất 1 đỉnh khác.

Ví dụ:

Input
3

0 1 1

1 0 1

1 1 0
Output
2 3

1 3

1 2

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <sstream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
const int nMax=1000006;
vector<int> dske[nMax];
vector<int> mtke[nMax];
void chuyen_mtke_sang_dske(int dinh){
    For(i,0,dinh){
        For(j,0,dinh){
            if(mtke[i][j]==1) dske[i].push_back(j+1);
        }
    }
}
int main(){
    int n,k; cin>>n;
    For(i,0,n){
        For(j,0,n){
            cin>>k;
            mtke[i].push_back(k);
        }
    }
    chuyen_mtke_sang_dske(n);
    For(i,0,n){
        For(j,0,dske[i].size()) cout<<dske[i][j]<<" ";
        cout<<endl;
    }
}
