/*
Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N và số K; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
T, N, K, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ K<N ≤50; 0≤A[i]≤1000.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ví dụ:

Input
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1
Output

17
2
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
void process(){
    int n,k,x; cin>>n>>k;
    vector<int> a;
    For(i,0,n){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    if(k>n/2) k=n-k;
    int total1=0,total2=0;
    For(i,0,n){
        if(i<k) total1+=a[i];
        else total2+=a[i];
    }
    cout<<abs(total1-total2)<<endl;
}
int main(){
    int t; cin>>t;
    while(t--)
    process();
}


