/*
Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam giác được tạo ra bởi n hàng, trong đó hàng thứ n là dãy số A[], hàng i là tổng hai phần tử liên tiếp của hàng i+1 (1≤i≤n-1). Ví dụ A[] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

[48]

[20, 28]

[8, 12, 16]     

[3, 5, 7, 9 ]

[1, 2, 3, 4, 5 ]

            Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N số của mảng A[].
T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;
Output:

Đưa ra kết quả mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự [, ].

Input
1

5

1 2 3 4 5

Output

[48] [20 28] [8 12 16] [3 5 7 9 ] [1 2 3 4 5 ]
*/
#include <iostream>
#include <vector>
#include <queue>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Fori(i,a,b) for(int i=b-1;i>=a;i--)
#define vi vector<int>
using namespace std;
queue<int> a;
vector<queue<int>>b;
void Add(queue<int> k){
    b.push_back(k);
}
void display(queue<int> k){
	cout<<"[";
    int i=0;
	while(i<k.size()-1){
        cout<<k.front()<<" ";
        k.pop();
    }
	cout<<k.front();
	cout<<"] ";
}
void Try(int n){
    For(i,0,n-1){
        int k=a.front();
        a.pop(); k+=a.front();
        a.push(k);
    }
    a.pop();
    Add(a);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n;
        For(i,0,n){
            cin>>k;
            a.push(k);
        }
        Add(a);
        if(n!=1) Try(n);
        Fori(i,2,n){
            Try(i);
        }
        Fori(i,0,b.size()) display(b[i]);  
        while(!a.empty()){
            a.pop();
        }
        b.clear();
        cout<<endl;
    }
}
