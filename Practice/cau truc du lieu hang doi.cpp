/*
Ban đầu cho một queue rỗng. Bạn cần thực hiện các truy vấn sau:

Trả về kích thước của queue
Kiểm tra xem queue có rỗng không, nếu có in ra “YES”, nếu không in ra “NO”.
Cho một số nguyên và đẩy số nguyên này vào cuối queue.
Loại bỏ phần tử ở đầu queue nếu queue không rỗng, nếu rỗng không cần thực hiện.
Trả về phần tử ở đầu queue, nếu queue rỗng in ra -1.
Trả về phần tử ở cuối queue, nếu queue rỗng in ra -1.
Dữ liệu vào

Dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ theo dạng sau.

Dòng đầu tiên chứa số nguyên n - lượng truy vấn (1 ≤ n ≤ 1000)

N dòng tiếp theo, mỗi dòng sẽ ghi loại truy vấn như trên, với truy vấn loại 3 sẽ có thêm một số nguyên, không quá 106.

Kết quả: In ra kết quả của các truy vấn..

Ví dụ:

Input

1

14

3 1

3 2

3 3

5

6

4

4

4

4

4

3 5

3 6

5

1

Output
1

3

5

2
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <sstream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
queue<int> Que;
void check(int a,int b){
    switch(a){
        case 1: cout<<Que.size()<<endl;
        break;
        case 2: 
        if(Que.size()!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        break;
        case 3:
        cin>>b;
        Que.push(b);
        break;
        case 4:
        if(!Que.empty()) Que.pop();
        break;
        case 5:
        if(Que.empty()) cout<<"-1"<<endl;
        else cout<<Que.front()<<endl;
        break;
        case 6:
        if(Que.empty()) cout<<"-1"<<endl;
        else cout<<Que.back()<<endl;
        break;
    }    
}
void clear(){
    while(!Que.empty()) Que.pop();
}
int main(){
    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        while(n--){
            int a,b; cin>>a;
            check(a,b);
        }
        clear();
    }
}