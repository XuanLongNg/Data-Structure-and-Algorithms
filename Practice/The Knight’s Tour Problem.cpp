/*
Cho một bàn cờ n × n với n
2
ô. Một con hiệp sĩ – được di
chuyển tuân theo luật chơi cờ vua – được đặt trên bàn cở tại
ô đầu tiên có tọa độ x0
, y0
.

Vấn đề là tìm một lộ trình gồm n
2
–1 bước sao cho phủ toàn

bộ bàn cờ (mỗi ô được viếng đúng một lần).
*/
#include <bits/stdc++.h>
#define For(i, a, b) for (ll i = a; i < b; i++)
#define SORT(a) sort(a.begin(), a.end())
#define OUT(a) for(auto i:a) cout<<i<<" "; cout<<endl;
#define GET(a) for(auto &i:a) cin>>i;
#define ve vector<int>

#define vi vector<int>
#define pi pair<int, int>
#define ll long long
using namespace std;
int n,m=1;
ve duong_i;
ve duong_j;
bool check[1000][1000];

void Set(){
    For(i,0,n)
    For(j,0,n) check[i][j] = true;
    duong_i.resize(n*n,0);
    duong_j.resize(n*n,0);
}
void printDuong(){
	cout<<"Cach "<<m<<endl;
    For(i,0,n*n){
        cout<<"Buoc "<<i+1<<": i = "<<duong_i[i]+1<<", j = "<<duong_j[i]+1<<endl;
    }m++;
}
void Try(int i,int j,int count){
    if(count==n*n){
        printDuong();
        return;
    }
    if(i<0||i>=n||j<0||j>=n||check[i][j]==false) return;
    duong_i[count]=i;
    duong_j[count]=j;
    check[i][j] = false;
    Try(i+1,j+2,count+1);
    Try(i+1,j-2,count+1);
    Try(i+2,j+1,count+1);
    Try(i+2,j-1,count+1);
    Try(i-1,j+2,count+1);
    Try(i-1,j-2,count+1);
    Try(i-2,j+1,count+1);
    Try(i-2,j-1,count+1);
    check[i][j] = true;
}
void process()
{
    cin>>n;
	Set();
    int i,j;
    cin>>i>>j;
    Try(i,j,0);
}

int main()
{
    // cin >> t;
    // while (t--)
        process();
}
