/*
Cho số tự nhiên N. Hãy tìm cặp số nguyên tố đầu tiên có tổng là N. Nếu không tồn tại cặp số nguyên tố có tổng bằng N, hãy đưa ra -1.

Input:

Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm là một số N được ghi trên một dòng.
T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤106.
Output:

Đưa ra kết quả mỗi test theo từng dòng.
Input:
2
4
8
Output:
2 2
2 5
*/
#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
bool x[1000001];
vector<int> prime;
void Prime(int k){
    int n,i=k,j=k;
    while(x[i]==1) i++;
    while(i*j<=1000001){
        n=i*j;
        x[n]=1;
        j++;
    }
    if(pow(k+1,2)<=1000001) Prime(k+1);
    else return;  
}
void PrimeY(){
    For(i,0,1000001)
    if(x[i]==0) prime.push_back(i);
}
int binary_search(int l,int r,int k){
    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(prime[mid]>=k) r=mid;
        else l=mid+1;
    }
    if(prime[l]==k) return l;
    return -1;
}
int main(){
    x[0]=1; x[1]=1;
    Prime(2);
    PrimeY();
    int t; cin>>t;
    while(t--){
        int n,h=-1; cin>>n;
        For(i,0,prime.size()){
            int k=binary_search(i,prime.size()-1,n-prime[i]);
            if(k!=-1){
                cout<<prime[i]<<" "<<prime[k];
                h=1;
                break;
            }
        }
        if(h==-1) cout<<h;
        cout<<endl;
    }
}
