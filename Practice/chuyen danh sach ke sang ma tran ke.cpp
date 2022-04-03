/*
Cho đơn đồ thị vô hướng có n đỉnh dưới dạng danh sách kề.

Hãy biểu diễn đồ thị bằng ma trận kề.

Input: Dòng đầu tiên chứa số nguyên n – số đỉnh của đồ thị (1 ≤  n ≤  1000). n dòng tiếp theo, dòng thứ i chứa các số nguyên là các đỉnh kề với đỉnh i.  

Output:  Ma trận kề của đồ thị.

Ví dụ:

Input
3

2 3

1 3

1 2
Output
0 1 1

1 0 1

1 1 0

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
int to_int(string k){
    int h=0;
    For(i,0,k.size())
    h=h*10+k[i]-'0';
    return h;
}
void chuyen_dske_sang_mtke(int dinh){
    For(i,0,dinh){
        int k=0;
        For(j,0,dinh)
        if(dske[i][k]==j+1){
            mtke[i].push_back(1);
            k++;
        }else mtke[i].push_back(0);
    }
}
int main(){
    int n; cin>>n; cin.ignore();
    For(i,0,n){
        string dinh;
        getline(cin,dinh);
        stringstream ss(dinh);
        string token;
        while(ss>>token){
            dske[i].push_back(to_int(token));
        }
    }
    chuyen_dske_sang_mtke(n);
    For(i,0,n){
        For(j,0,n) cout<<mtke[i][j]<<" ";
        cout<<endl;
    }
}