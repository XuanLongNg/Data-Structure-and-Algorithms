/*
Cho ba số N, P, S. Trong đó, P là một số nguyên tố. Nhiệm vụ của bạn là đưa ra tất cả N số nguyên tố tính từ P có tổng bằng S. Ví dụ với S = 28, P=7, N =2 ta có kết quả 11 + 17 = 28. Với N = 3, P = 2, S = 23 ta có kết quả : {3, 7, 13}, {5, 7, 11}

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ ba số S, P, N được viết trên một dòng.
S, P, N thỏa mãn ràng buộc: 1≤T ≤100; 1 ≤ N ≤ 10; 2≤S, P≤200.
Output:

Với mỗi test, dòng đầu tiên in ra số lượng đáp án tìm được. Mỗi dòng tiếp theo in ra kết quả tìm được theo thứ tự từ điển.
Input
2
2  7  28
3  2  23


Output

1

11 17

2

3 7 13

5 7 11
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
int n,p,s,Count;
bool check[201];
vi prime;
vec(string) ans;
void Create_Prime(int i){
    int h=i, k=i;
    if(i*i>=200) return;
    if(check[i]){
        Create_Prime(i+1);
        return;
    }
    while(h*k<=200){
        check[h*k]=1;
        k++;
    }
    Create_Prime(i+1);
}
void Try(int i,int j,int total,string k){
    if(j>s) return;
    if(i==n){
        if(total==s){
            Count++;
            ans.push_back(k);
        }
        return;
    }
    For(x,j,prime.size()-n+i+1){
        Try(i+1,x+1,total+prime[x],k+to_string(prime[x])+" ");
    }
}
void Set(){
    Count=0;
    ans.clear();
}
int main(){
    faster();
    memset(check,0,sizeof(check));
    check[0]=1;
    check[1]=1;
    Create_Prime(2);
    For(i,0,200)
    if(!check[i]) prime.push_back(i);
    test(){
        cin>>n>>p>>s;
        Set();
        int i=lower_bound(prime.begin(),prime.end(),p)-prime.begin();
        Try(0,i+1,0,"");
        cout<<Count<<endl;
        For(i,0,ans.size()) cout<<ans[i]<<endl;
    }
}

