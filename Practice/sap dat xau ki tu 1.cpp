 /*
 Cho xâu ký tự S bao gồm các ký tự in thường. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để hai ký tự giống nhau đều không kề nhau hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên một dòng.
T, S thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
3
geeksforgeeks
bbbabaaacd
bbbbb
Output
1
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
        string k;
        cin>>k;
        map<char,int>v;
        int max=0;
        For(i,0,k.size()){
            v[k[i]]++;
        }
        map<char,int>::iterator it;
        for(it=v.begin();it!=v.end();it++)
        if(it->second>max) max=it->second;
        if(k.size()-max>=max-1) cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
}
