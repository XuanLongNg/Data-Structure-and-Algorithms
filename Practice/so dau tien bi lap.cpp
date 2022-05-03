/*
Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là hãy tìm số xuất hiện nhiều hơn 1 lần trong dãy số và số thứ tự là nhỏ nhất.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu.

Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10^9).

Output: 

Với mỗi test in ra đáp án của bài toán trên một dòng. Nếu không tìm được đáp án, in ra “NO”.

Ví dụ:

Input:
2

7

10 5 3 4 3 5 6

4

1 2 3 4
Output

5

NO
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
vector<int> a;
int n;
void Try(){
    a.clear();
    cin>>n;
    int h;
    map<int,int>s;
    For(i,0,n){
        cin>>h;
        a.push_back(h);
        s[h]++;
    }
    For(i,0,n){
        if(s[a[i]]>1){
            cout<<a[i]<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        Try();
    }
}
