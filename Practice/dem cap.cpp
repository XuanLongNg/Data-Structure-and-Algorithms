/*
Cho mảng X[] gồm n phần tử và mảng Y[] gồm m phần tử. Hãy đếm số các cặp xy>yx, trong đó x€X[] và y€Y[]. Ví dụ X[] = {2, 1, 6 }, Y[] = {1, 5} ta có kết quả là 3 cặp (2, 1), (2, 5), (6, 1).

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m tương ứng với số phần tử của mảng X[] và Y[]; dòng tiếp theo là n số X[i] của mảng X[]; dòng cuối cùng là m số của mảng Y[]; các số được viết cách nhau một vài khoảng trống.
T, n, m, X[i], Y[j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤105; 0≤ X[i], Y[j] ≤103.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:

1
3 2
2 1 6
1 5

Output:
3
*/
#include <bits/stdc++.h>
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
vi x,y;
int n,m;
int count1=0;
void Set(){
    x.clear(); y.clear();
    count1=0;
}
void Count(){
    int k=-1;
    while(1){
        k=lower_bound(y.begin()+k+1,y.end(),0)-y.begin();
        if(y[k]==0){
            int h=lower_bound(x.begin(),x.end(),1)-x.begin();
            count1+=n-h;

        }else break;
    }
    k=-1;
    while(1){
        k=lower_bound(y.begin()+k+1,y.end(),1)-y.begin();
        if(y[k]==1){
            int h=lower_bound(x.begin(),x.end(),2)-x.begin();
            count1+=n-h;
            
        }else break;
    }
    k=-1;
    while(1){
        k=lower_bound(y.begin()+k+1,y.end(),2)-y.begin();
        if(y[k]==2){
            int h=lower_bound(x.begin(),x.end(),3)-x.begin();
            while(x[h]==3){
                count1++;
                h++;
            }
        }else break;
    }
    For(i,0,n){
        if(x[i]==2){
            k=lower_bound(y.begin(),y.end(),5)-y.begin();
            count1+=m-k;
      
        }else if(x[i]>2){
            k=lower_bound(y.begin(),y.end(),x[i]+1)-y.begin();
            if(y[k]>x[i]){
                count1+=m-k;
           
            }
            else break;
        }
    }
}
int main(){
    faster();
    test(){
        cin>>n>>m;
        int k;
        Set();
        For(i,0,n){
            cin>>k;
            x.push_back(k);
        }
        For(i,0,m){
            cin>>k;
            y.push_back(k);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        Count();
        cout<<count1<<endl;
    }
}