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
#include <bits/stdc++.h>
#include <cstring>
#define faster()				    \
	ios_base::sync_with_stdio(0);	\
	cin.tie(NULL);  	     	    \
	cout.tie(NULL)
#define test()				\
	int test;				\
	cin>>test;				\
	while(test--)		
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define pb push_back
#define f first 
#define s second
#define ll long long
#define ld long double
#define ulli usignal long long int
#define lli unsigned long long int
#define vec(c) vector<c>
#define vi vector<int>
#define vll vector<long long>
#define rev(c) reverse(c.begin(),c.end())
#define pau system("pause");
#define Mod 1000000007
#define N 1000001
#define Ite ::iterator
using namespace std;
int main(){
    int n,k; cin>>n;
    vi a(n),lct(n);
    For(i,0,n){
        cin>>a[i];
        lct[a[i]]=i;
    }
    int Max=0;
    vector<int> F(n+1,1);
    F[0]=0;
    For(i,1,n){
        int x=a[i];
        if(x>1 && lct[x-1]<i){
            F[a[i]]=F[a[i]-1]+1;
            Max=max(Max,F[a[i]]);
        }
    }
    cout<<n-Max<<endl;
}