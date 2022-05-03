/*
Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = AK với K là số nguyên cho trước. Sau đó, tính tổng các phần tử của cột cuối cùng. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 109+7.

Input:

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 109) là kích thước của ma trận và số mũ.

Output: 

Với mỗi test, in ra kết quả của ma trận X.

Ví dụ:

Input:
2

2 5

1 1

1 0

3 1000000000

1 2 3

4 5 6

7 8 9
Output
8

581039956
Giải thích:

A^5 = 8 5

      5 3

Tổng các phần tử trên cột cuối cùng bằng 5+3 = 8.

               597240088 35500972 473761863

B^1000000000 = 781257150 154135232 527013321

               965274212 272769492 580264779

Tổng các phần tử trên cột cuối cùng là:

(473761863+527013321+580264779) % 1000000007 = 581039956
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
struct Matrix{
    vec(vll) matrix;
	Matrix operator*(Matrix b){
        Matrix c;
        For(i,0,b.matrix.size()){
			vll m;
            For(j,0,b.matrix.size()){
                ll h=0;
                For(k,0,b.matrix.size()){
                    h+=this->matrix[i][k]*b.matrix[k][j];
                    h%=Mod;
                }
                m.push_back(h);
            }
			c.matrix.push_back(m);
        }
        return c;
    }
};
Matrix Pow(Matrix a,Matrix b,int n,int k){
    if(k==1) return b;
    if(k%2==0){
        Matrix temp=Pow(a,b,n,k/2);
        return temp*temp;
    }else return a*Pow(a,b,n,k-1);
}
int main(){
    int t; cin>>t;
    while(t--){
        Matrix a,b;
        ll n,k; cin>>n>>k;
	    ll g;
	    For(i,0,n){
		    vll h;
		    For(j,0,n){
			    cin>>g;
			    h.push_back(g);
		    }
		    a.matrix.push_back(h);
	    }
        b=a;
        b=Pow(a,b,n,k);
        ll total=0;
        For(i,0,n){
            total+=b.matrix[i][n-1];
            total%=Mod;
        }
        cout<<total<<endl;
    }
}