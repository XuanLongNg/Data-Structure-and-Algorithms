/*
Cho đơn đồ thị G vô hướng liên thông được mô tả bởi danh sách kề. Hãy in ra danh sách cạnh tương ứng của G.

Input

Dòng đầu tiên ghi số N là số đỉnh (1<N<50)
N dòng tiếp theo mỗi dòng ghi 1 danh sách kề lần lượt theo thứ tự từ đỉnh 1 đến đỉnh N
Output: Ghi ra lần lượt từng cạnh của đồ thị theo thứ tự tăng dần.

Ví dụ

Input
3

2 3

1 3

1 2
Output

1 2

1 3

2 3
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
int to_int(string k){
    int h=0;
    For(i,0,k.size())
    h=h*10+k[i]-'0';
    return h;
}
int main(){
    int n; cin>>n; cin.ignore();
    vector<vector<int>> a;
    For(i,0,n){
        string dinh;
        getline(cin,dinh);
        stringstream ss(dinh);
        string token;
        while(ss>>token){
            if(to_int(token)<=i) continue;
            vector<int> k;
            k.push_back(i+1);
            int m=to_int(token);
            k.push_back(m);
            a.push_back(k);
        }
    }
    For(i,0,a.size()){
        For(j,0,2)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}