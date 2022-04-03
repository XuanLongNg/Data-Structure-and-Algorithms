/*
Cho đồ thị có hướng G=<V, E> được biểu diễn dưới dạng danh sách cạnh. Hãy viết chương trình thực hiện chuyển đổi biểu diễn đồ thị dưới dạng danh sách kề.

Input:

Dòng đầu tiên đưa vào T là số lượng bộ test.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm |E| +1 dòng: dòng đầu tiên đưa vào hai số |V|, |E| tương ứng với số đỉnh và số cạnh của đồ thị; |E| dòng tiếp theo đưa vào các bộ đôi uÎV, vÎV tương ứng với một cạnh của đồ thị.
T, |V|, |E| thỏa mãn ràng buộc: 1≤T≤200; 1≤|V|≤103; 1≤|E|≤|V|(|V|-1)/2;
Output:

Đưa ra danh sách kề của các đỉnh tương ứng theo khuôn dạng của ví dụ dưới đây. Các đỉnh trong danh sách in ra theo thứ tự tăng dần.
     Ví dụ:

 

Input:
1

6  9

1  2

2  5

3  1

3  2

3  5

4  3

5  4

5  6

6  4
Output:
1: 2

2: 5

3: 1 2 5

4: 3

5: 4 6

6: 4

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int dinh,canh; cin>>dinh>>canh;
        int dd,dc;
        vector<int> dske[1001];
        For(i,0,canh){
            cin>>dd>>dc;
            dske[dd].push_back(dc);
        }
        For(i,1,dinh+1){
            cout<<i<<": ";
            For(j,0,dske[i].size()) cout<<dske[i][j]<<" ";
            cout<<endl;
        }
    }
}