/*
Cho N  số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. Tìm ra một dãy con của dãy A (không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.

Input: Dòng đầu ghi số bộ test T (T<10).  Mỗi bộ test có hai dòng, dòng đầu tiên ghi hai số nguyên dương N và S (0 < N ≤ 200) và S (0 < S ≤ 40000). Dòng tiếp theo lần lượt ghi N số hạng của dãy A là các số A1, A2, ..., AN (0 < Ai ≤ 200).

Output:  Với mỗi bộ test, nếu bài toán vô nghiệm thì in ra “NO”, ngược lại in ra “YES”

Ví dụ:

Input
2

5 6
1 2 4 3 5

10 15

2 2 2 2 2 2 2 2 2 2
Output
YES

NO

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
int a[200];
int n,s;
bool ans=0;
int main(){
    faster();
    test(){
        ans=0;
        cin>>n>>s;
        For(i,0,n) cin>>a[i];
        bool check[40001]={0};
        check[0]=1;
        For(i,0,n){
            check[a[i]]=1;
            Fori(j,i,s+1)
            if(check[j-a[i]]) check[j]=1;
        }
        if(check[s]) cout<<"YES\n";
        else cout<<"NO\n";
    }
}