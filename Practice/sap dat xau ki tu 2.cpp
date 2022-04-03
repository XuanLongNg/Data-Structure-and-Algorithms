/*
Cho xâu ký tự S bao gồm các ký tự và số D. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để tất cả các ký tự giống nhau đều có khoảng cách là D hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số D; dòng tiếp theo là xâu S.
T, S, D thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000; 1≤D≤100.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
2

ABB
2
AAA
Output
1
-1
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
        int n; cin>>n;
        string k; cin>>k;
        map<char,int>v;
        int max=0;
        For(i,0,k.size()){
            v[k[i]]++;
        }
        map<char,int>::iterator it;
        for(it=v.begin();it!=v.end();it++)
        if(it->second>max) max=it->second;
        if(max*n-1<=k.size()) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
}
