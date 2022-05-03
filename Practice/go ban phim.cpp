/*
Trong quá trình gõ một dòng văn bản, chúng ta thường sử dụng phím sang trái, sang phải hoặc xóa lùi (backspace). Cho một dãy ký tự mô tả các thao tác gõ phím, trong đó:

Ký tự ‘-’ mô tả phím backspace (xóa lùi). Ký tự ở phía trước con trỏ (nếu có) sẽ bị xóa.
Ký tự ‘<’ mô tả phím di chuyển sang trái. Con trỏ sẽ sang trái 1 ký tự nếu có thể.
Ký tự ‘>’ mô tả phím di chuyển sang phải. Con trỏ sẽ sang phải 1 ký tự nếu có thể.
Các ký tự khác là các chữ cái Tiếng Anh (in hoa hoặc in thường). Bàn phím để ở chế độ Insert. Tức là nếu con trỏ không ở cuối dòng thì khi chèn các ký tự sẽ đẩy các ký tự khác sang phải một vị trí.
Hãy thử tính toán và viết ra kết quả tương ứng.

Input

Có một dòng không quá 106 ký tự mô tả dãy gõ bàn phím.

Output

Ghi ra kết quả.

Ví dụ

Input
<<PI<T>>Ta-
Output
PTIT

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
    faster();
    string k;
    getline(cin,k);
    int j=0;
    vector<char> str;
    For(i,0,k.size()){
        if(k[i]=='-'){
            str.erase(str.begin()+j-1);
            j--;
        }
        else if(k[i]=='<'){
            j--;
            if(j<0) j=0;
        }else if(k[i]=='>'){
            j++;
            if(j>str.size()) j=str.size();
        }
        else{
            str.insert(str.begin()+j,k[i]);
            j++;
        }
    }
    For(i,0,str.size()) cout<<str[i];

}