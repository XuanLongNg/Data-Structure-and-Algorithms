/*
Cho mảng A[] gồm n phần tử và số X. Hãy đưa sắp xếp các phần tử của mảng theo trị tuyệt đối của |X - A[i] |. Ví dụ với A[] = {10, 5, 3, 9, 2} và X = 7 ta đưa ra mảng được sắp xếp theo nguyên tắc kể trên: A[] = {5, 9, 10, 3, 2} vì |7-10|=3, |7-5|=2, |7-3|=4, |7-9|=2, |7-2|=5.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và X; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
T, n, X thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, X, A[i] ≤105.
Output:

Đưa ra kết quả mỗi test theo từng dòng.

Input:

2
5 7
10 5 3 9 2
5 6
1 2 3 4 5

Output:
5 9 10 3 2
5 4 3 2 1
*/
#include <iostream>
#include <algorithm>
#include <math.h>
#include <map>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int k;
void Sort(int *a,int n,int k){
    multimap<int, int>h;
    multimap<int, int>::iterator it;
    For(i,0,n){
        h.insert(pair<int,int>(abs(k-a[i]),a[i]));
    }
    for(it=h.begin();it!=h.end();it++){
        cout<<it->second<<" ";
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n>>k;
        int a[100001];
        For(i,0,n)
        cin>>a[i];
        Sort(a,n,k);
        cout<<endl;
    }
}