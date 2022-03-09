/*
Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤104; 1≤ k ≤103; 1≤ A[i] ≤105.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

2
5
5 5 4 6 4
5
9 9 9 2 5

Output:

4 4 5 5 6
9 9 9 2 5
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
map<int,int>k;
bool Sort(int a,int b){
    if(k[a]==k[b]) return a<b;
    return k[a]>k[b];
}
void display(std::vector<int>a){
    For(i,0,a.size()){
        int j=0;
        while(j<k[a[i]]){
            cout<<a[i]<<" ";
            j++;
        } 
    }
    cout<<endl;
}
void displayk(std::vector<int>a){
    For(i,0,a.size()) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,h; cin>>n;
        vector<int> a;
        For(i,0,n){
            cin>>h;
            k[h]++;
        }
        map<int,int>::iterator it;
        for(it=k.begin();it!=k.end();it++){
            a.push_back(it->first);
        }
        sort(a.begin(),a.end(),Sort);
        display(a);
        k.clear();
    }
}
