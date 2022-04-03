/*
Cho một dãy số a[] có n phần tử gồm các số từ 1 đến n theo 1 thứ tự ngẫu nhiên. Nhiệm vụ của bạn là sắp xếp lại dãy số này theo thứ tự tăng dần với điều kiện : ở mỗi bước sắp xếp, bạn chỉ được chọn 1 số ở 1 vị trí bất kì và chuyển số đó lên đầu dãy hoặc về cuối dãy.

Hãy tính số bước tối thiểu cần thực hiện để hoàn thành việc sắp xếp.

Input

Dòng đầu tiên ghi 1 số n: số lượng phần tử của dãy a (1 ≤ n ≤ 100000)
Dòng tiếp theo gồm n số từ 1 đến n theo thứ tự ngẫu nhiên
Output

Một số nguyên duy nhất là số bước tối thiểu cần thực hiện để hoàn thành việc sắp xếp.
Ví dụ

Input
5

4 1 2 5 3
Output
2

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
    int n; cin>>n;
    int a[n];
    For(i,0,n) cin>>a[i];
    vector<int> F;
    F.resize(n+1,0);
    int k=1;
    F[0]=0;
    For(i,1,n+1){
        F[i]=1;
        for(int j=i-1;j>=1;j--)
        if(a[j-1]<a[i-1]){
            F[i]=max(F[i],F[j]+1);
        }
        k=max(F[i],k);
    }
    cout<<n-k<<endl;
}
