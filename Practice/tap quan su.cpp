/*
Tại Chương Mỹ Resort, vào nửa đêm, cả trung đội nhận lệnh tập trung ở sân. Mỗi chiến sỹ được đánh số từ 1 đến N (1<N<40). Giám thị yêu cầu chọn ra một dãy K chiến sỹ để tập đội ngũ và cứ lần lượt duyệt hết tất cả các khả năng chọn K người như vậy từ nhỏ đến lớn (theo số thứ tự). Bài toán đặt ra là cho một nhóm K chiến sỹ hiện đang phải tập đội ngũ, hãy tính xem trong lượt chọn K người tiếp theo thì mấy người trong nhóm cũ sẽ được tạm nghỉ. Nếu đã là nhóm cuối cùng thì tất cả đều sẽ được nghỉ.

Dữ liệu vào: Dòng đầu ghi số bộ test, không quá 20. Mỗi bộ test viết trên hai dòng

Dòng 1: hai số nguyên dương N và K (K<N)
Dòng 2 ghi K số thứ tự của các chiến sỹ đang phải tập đội ngũ (viết từ nhỏ đến lớn)
Kết quả: Với mỗi bộ dữ liệu in ra số lượng chiến sỹ được tạm nghỉ.

 Ví dụ:

INPUT
3

5 3

1 3 5

5 3

1 4 5

6 4

3 4 5 6
OUTPUT
1

2

4

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
int n,k;
vi save,as,f_as;
int Count(){
    int count=k,i=0,j=0;
    while(i<k&&j<k){
        if(save[i]==as[j]){
            count--; i++; j++;
        }
        else if(save[i]<as[j]) i++;
        else j++;
    }
    return count;
}
int check(){
    if(as==f_as) return k;
    int i=k-1;
    while(as[i]==n+i-k+1&&i>0) i--;
    For(j,0,i) save.push_back(as[j]);
    save.push_back(as[i]+1);
    For(j,i+1,k) save.push_back(as[i]+j-i+1);
    return Count();
}
void Set(){
    save.clear();
    as.clear();
    f_as.clear();
} 
int main(){
    faster();
    test(){
        Set();
        cin>>n>>k;
        int m=n-k+1;
        For(i,0,k){
            int h; cin>>h;
            as.push_back(h);
            f_as.push_back(m);
            m++;
        }
        cout<<check()<<endl;
    }
}