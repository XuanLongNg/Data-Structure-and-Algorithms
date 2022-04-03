/*
Cho dãy số A[], B[] và C[] là dãy không giảm và có lần lượt N, M, K phần tử. Nhiệm vụ của bạn là hãy tìm các phần tử chung của 3 dãy số này.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên N, M và K (1≤ N, M, K ≤ 100 000).

Dòng tiếp theo gồm N số nguyên A[i], rồi M số nguyên B[i] và K số nguyên C[i].

(0 ≤ A[i], B[i], C[i] ≤ 10^9).

Output: 

Với mỗi test, in ra trên một dòng là đáp án thu được. Nếu không tìm được đáp án, in ra “NO”.

 

Ví dụ:

Input:
3

6 5 8

1 5 10 20 40 80

5 7 20 80 100

3 4 15 20 30 70 80 120

3 5 4

1 5 5

3 4 5 5 10

5 5 10 20

3 3 3

1 2 3

4 5 6

7 8 9
Output
20 80

5 5

NO

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
        int n,m,k; cin>>n>>m>>k;
        map<int,int>n1,m1,k1;
        int mid;
        For(i,0,n){
            cin>>mid;
            n1[mid]++;
        }
        For(i,0,m){
            cin>>mid;
            m1[mid]++;
        }
        For(i,0,k){
            cin>>mid;
            k1[mid]++;
        }
        int check=0;
        map<int,int>::iterator it;
        for(it=n1.begin();it!=n1.end();it++){
            if(m1[it->first]>0&&k1[it->first]>0){
                mid=min(it->second,k1[it->first]);
                mid=min(mid,m1[it->first]);
                while(mid--) cout<<it->first<<" ";
                check=1;
            }
        }
        if(check==0) cout<<"NO";
        cout<<endl;
    }
}