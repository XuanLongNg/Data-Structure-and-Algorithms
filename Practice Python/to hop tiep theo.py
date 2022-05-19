def process():
    n,k=map(int,input().split())
    i=k-1
    lst=[]
    ans=[]
    lst=[int(i) for i in input().split()]
    while i>0 and lst[i]==n-k+1+i:
        i-=1
    if lst[i]==n-k+1+i:
        i-=1
    if i==-1:
        for j in range(len(k)):
            ans.append(j+1)
    else:
        for j in range(0,i):
            ans.append(lst[j])
        ans.append(lst[i]+1)
        for j in range(i+1,len(n)):
            ans.append(lst[i]+j-i)
    print(lst)
t=int(input())
for i in range(t):
    process()
