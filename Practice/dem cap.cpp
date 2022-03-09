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
#include <iostream>
#include <algorithm>
#include <map>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Mod 1000000007
#define ll long long
using namespace std;
void display(int *a,int n){
    For(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
}
int binary_search(int *a,int l,int r,int k){
    int mid;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    if(a[l]==k) return l;
    return -1;
}
int binary_search_K(int *a,int n,int k){
    int l=0,r=n-1,mid;
    while(l<r){
        mid=(l+r)/2;
        if(a[mid]>=k) r=mid;
        else l=mid+1;
    }
    return l;
}
void Count(int *a,int *b,int n,int m,int &count){
    int k=binary_search(b,0,m,0),j=0;
    while(k!=-1){
        int i=0;
        while(a[i]==0) i++;
        count+=n-i;
        j=binary_search(b,j,m,2)+1;
        k=binary_search(b,j,m,0);
        
    }
    k=binary_search(b,0,m,1); j=0;
    while(k!=-1){
        int i=0;
        while(a[i]<2) i++;
        count+=n-i;
        j=binary_search(b,j,m,1)+1;
        k=binary_search(b,j,m,1);
        
    }
    k=binary_search(b,0,m,2); j=0;
    while(k!=-1){
        int i=0;
        while(binary_search(a,i,n,3)!=-1){
            count++;
            i=binary_search(a,i,n,3)+1;
           
        }
        j=binary_search(b,j,m,2)+1;
        k=binary_search(b,j,m,2);
    }
    For(i,0,n){
        if(a[i]==2){
            int k=binary_search_K(b,m,5);
            if(b[k]>=5){
                count+=m-k;
                 
            }
        }else if(a[i]>2){
            int k=binary_search_K(b,m,a[i]+1);
            if(a[i]<=b[k]){
                count+=m-k;
                
            }
        }
    }
    
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,m,count=0,k; cin>>n>>m;
        int a[n],b[m];
        map<int,int>a1,a2;
        For(i,0,n) cin>>a[i];
        For(i,0,m) cin>>b[i];
        sort(a,a+n);
        sort(b,b+m);
        Count(a,b,n,m,count);
        cout<<count<<endl;
    }
}