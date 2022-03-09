/*
Bài toán Tháp Hà Nội đã rất nổi tiểng. Bắt đầu có các đĩa xếp chồng lên cột A theo thứ tự kích thước giảm dần, nhỏ nhất ở trên cùng. Cột B và cột C ban đầu không có đĩa nào cả.
Mục tiêu của bạn là di chuyển toàn bộ các đĩa theo đúng thứ tự về cột C, tuân theo các quy tắc sau:

Mỗi lần chỉ có thể di chuyển một đĩa.
Mỗi lần di chuyển sẽ lấy đĩa trên từ một trong các cột và đặt nó lên trên một cột khác.
Không được đặt đĩa lên trên đĩa nhỏ hơn..
Input:

Số tự nhiên  0 < N < 10

Output:

In ra lần lượt từng bước theo mẫu trong ví dụ. Chú ý giữa các chữ cái và dấu -> có khoảng trống.

Ví dụ:

Input
3
Ouput   
A -> C

A -> B

C -> B

A -> C

B -> A

B -> C

A -> C
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define Mod 1000000007
#define ll long long
using namespace std;
void Try(int n , char a, char b, char c ){
    if(n==1){
        cout<<a<<" -> "<<c<<endl;
        return;
    }
    Try(n-1,a,c,b);
    Try(1,a,b,c);
    Try(n-1,b,a,c);
    }
int main(){
    char a='A',b='B',c='C';
    int n; cin>>n;
    Try(n,a,b,c);
    return 0;
}