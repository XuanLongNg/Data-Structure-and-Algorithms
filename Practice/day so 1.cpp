/*
Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam giác được tạo ra bởi n hàng, trong đó hàng thứ 1 là dãy số A[], hàng i là tổng hai phần tử liên tiếp của hàng i-1 (2≤i≤n). Ví dụ A[] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

[1, 2, 3, 4, 5 ]

[3, 5, 7, 9 ]

[8, 12, 16]

[20, 28]

[48]

            Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;
Output:

Đưa ra tam giác tổng của mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự [, ].
Input

1

5

1 2 3 4 5

Output
[1 2 3 4 5]

[3 5 7 9]

[8 12 16]

[20 28]

[48]
*/
#include <iostream>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
using namespace std;
void display(std::vector<int> a){
    cout<<"[";
    For(i,0,a.size()-1) cout<<a[i]<<" ";
    cout<<a[a.size()-1]<<"]";
    cout<<endl;
}
void Try(std::vector<int>a,int n){
    int i=0;
    while(i<n-1){
        a.push_back(a[0]+a[1]);
        a.erase(a.begin());
        i++;
    }
    a.erase(a.begin());
    display(a);
    if(n!=2) Try(a,n-1);
    else n=1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n;
        vector<int> a;
        For(i,0,n){
            cin>>k;
            a.push_back(k);
        }
        display(a);
        if(n!=1) Try(a,n);
    }
}
