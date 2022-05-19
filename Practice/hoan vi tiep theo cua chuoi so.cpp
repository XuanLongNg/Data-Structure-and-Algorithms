/*
Hãy viết chương trình nhận vào một chuỗi (có thể khá dài) các ký tự số và đưa ra màn hình hoán vị kế tiếp của các ký tự số đó (với ý nghĩa là hoán vị có giá trị lớn hơn tiếp theo nếu ta coi chuỗi đó là một giá trị số nguyên). Chú ý: Các ký tự số trong dãy có thể trùng nhau.

Ví dụ:               123 -> 132

279134399742 -> 279134423799  

Cũng có trường hợp sẽ không thể có hoán vị kế tiếp. Ví dụ như khi đầu vào là chuỗi 987.  

Dữ liệu vào: Dòng đầu tiên ghi số nguyên  t là số bộ test (1 ≤ t ≤ 1000).  Mỗi bộ test có một dòng, đầu tiên là số thứ tự bộ test, một dấu cách, sau đó là chuỗi các ký tự số, tối đa 80 phần tử.  

Kết quả: Với mỗi bộ test hãy đưa ra một dòng gồm thứ tự bộ test, một dấu cách, tiếp theo đó là hoán vị kế tiếp hoặc chuỗi “BIGGEST” nếu không có hoán vị kế tiếp. 

Ví dụ:

INPUT
3

1 123

2 279134399742

3 987
OUTPUT
1 132

2 279134423799

3 BIGGEST

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
#define pii pair<int,int>
using namespace std;  
int n;
string k;
void check(){
    int i=n-1,j=n-1;
    while(k[i]<=k[i-1]&&i>0) i--;
    if(i==0){
        cout<<"BIGGEST";
        return;
    }
    i--;
    while(k[i]>=k[j]) j--;
    swap(k[i],k[j]);
    sort(k.begin()+i+1,k.end());
    cout<<k;
}
int main(){
    faster();
    test(){
        int c;
        cin>>c>>k;
        n=k.size();
        cout<<c<<" ";
        check();
        cout<<endl;
    }
}