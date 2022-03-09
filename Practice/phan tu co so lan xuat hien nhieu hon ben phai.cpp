/*
Cho mảng A[]  gồm n phần tử. Nhiệm vụ của bạn là tìm phần tử gần nhất phía bên phải có số lần xuất hiện lớn hơn phần tử hiện tại. Nếu không có phần tử nào có số lần xuất hiện lớn hơn phần tử hiện tại hãy đưa ra -1.

Ví dụ với dãy A[] = {1, 1, 2, 3, 4, 2, 1 }, ta nhận được kết quả ans[] = {-1, -1, 1, 2, 2, 1, -1} vì số lần xuất hiện mỗi phần tử trong mảng là F = {3, 3, 2, 1, 1, 2, 3} vì vậy phần tử A[0] = 1 có số lần xuất hiện là 3 và không có phần tử nào xuất hiện nhiều hơn 3 nên ans[0] = -1, tương tự như vậy với A[2]=2 tồn tại A[6] =1 có số lần xuất hiện là 3 nên ans[2] = 1.

 

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test gồm hai dòng, dòng đầu tiên đưa vào số n là số các phần tử của mảng A[]; dòng tiếp theo đưa vào n số của mảng A[]; các phần tử được viết cách nhau một vài khoảng trống.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 0≤n, A[i]≤106.
Ví dụ:

Input
1

7

1  1  2  3  4  2  1
Output
-1 -1 1 2 2 1 -1

*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Fori(i,a,b) for(ll i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
queue<int>a;
vector<int> check;
queue<int> ans;
int find(int x,queue<int>k){
    int Max=-1;
    while(!k.empty()){
        if(check[k.front()]>check[x]){
            Max=k.front();
            break;
        }
        k.pop();
    }
    return Max;
}
int main(){
    check.resize(1000000,0);
    int t; cin>>t;
    while(t--){
        int n,k,Max=0; cin>>n;
        For(i,0,n){
            cin>>k;
            a.push(k);
            check[k]++;
            if(check[Max]<check[k]) Max=k;
        }
        while(!a.empty()){
            if(a.front()==Max) cout<<"-1 ";
            else cout<<find(a.front(),a)<<" ";
            a.pop();
        }
        cout<<endl;
    }
}
