/*Bạn được giao cho N công việc, công việc thứ i có thời gian bắt đầu là A[i] và kết thúc tại B[i]. Tại một thời điểm, bạn chỉ có thể làm một công việc.

Bạn hãy lựa chọn các công việc một cách tối ưu sao cho số công việc làm được là nhiều nhất.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 10).

Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).

N dòng tiếp theo, mỗi dòng gồm 2 số A[i] và B[i] (0 ≤ A[i] < B[i] ≤ 106).

Output:  Với mỗi test, in ra đáp án trên một dòng.

Ví dụ:

Input
1

6

5 9

1 2

3 4

0 6

5 7

8 9
Output
4

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
int Count=0;
class arr{
    public:
    int begin;
    int end;
};
bool comp(arr a,arr b){
    return a.end<b.end;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,count=1;
        cin>>n;
        arr a[n];
        For(i,0,n)
        cin>>a[i].begin>>a[i].end;
        sort(a,a+n,comp);

        int be=a[0].end;
        For(i,0,n)
        if(a[i].begin>=be){
            be=a[i].end;
            count++;
        }
        cout<<count<<endl;
    }
}