/*
Cho biểu thức số học, hãy cho biết biểu thức số học có dư thừa các cặp ký hiệu ‘(’,’) ‘ hay không?

Input:

Dòng đầu tiên đưa vào số lượng bộ test T;
Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một biểu thức.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Ràng buộc:

T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤20.
Ví dụ:

 

Input

3

((a+b))

(a + (b)/c)

(a + b*(c-d))

Output
Yes

Yes

No
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <cstring>
#include <sstream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
int main(){
    int n; cin>>n; cin.ignore();
    while(n--){
        string k;
        stack<string>a;
        bool check[20];
        int c=0;
        memset(check,1,20);
        getline(cin,k);
        For(i,0,k.size()){
            if(k[i]=='('){
                check[c]=false;
                cout<<check[c]<<endl;
                c++;
            }else if(k[i]!=')'&&k[i]!='('){
                check[c]=true;
            }else{
                cout<<check[c]<<endl;
                c--;
            }
        }
        c=1;
        For(i,0,20){
            if(check[i]==false){
                c=0;
                break;
            }
        }
        if(c==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
