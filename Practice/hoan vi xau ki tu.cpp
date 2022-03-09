/*
Cho xâu ký tự S bao gồm các ký tự in hoa khác nhau. Hãy đưa ra tất cả các hoán vị của xâu ký tự S. Ví dụ S=”ABC” ta có kết quả {ABC ACB BAC BCA CAB CBA}. 

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên 1 dòng.
T, S thỏa mãn ràng buộc: 1≤T≤10; 1≤length(S) ≤10;
Output:

Đưa ra kết quả mỗi test theo từng dòng.
 
Input
2
AB

ABC
Output
AB BA

ABC ACB BAC BCA CAB CBA 

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
vector<char>out;
int n;
string k;
bool check[10001];
void display(){
    For(i,0,out.size()) cout<<out[i];
    cout<<" ";
}
void Try(int i){
    For(j,0,k.size()){
        if(check[j]==false){
            out[i]=k[j];
            check[j]=true;
            if(i==n-1) display();
            else Try(i+1);
            check[j]=false;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>k;
        n=k.size();
        out.resize(n);
        Try(0);
        cout<<endl;
        
    }
    
}
