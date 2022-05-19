def process():
    n=str(input())
    i=len(n)-1
    while i>0 and n[i]=='0':
        i-=1
    k=''
    if n[i]=='0':
        i-=1
    if i==-1:
        for j in range(len(n)):
            k+='1'
        print(k)
        return
    for j in range(0,i+1):
        if j==i:
            k+='0'
        else:
            k+=n[j]
    for j in range(i+1,len(n)):
        k+='1'
    print(k)
t=int(input())
for i in range(0,t):
    process()
