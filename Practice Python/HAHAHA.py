def check(k):
    if k[0]=='A' or k[len(k)-1]=='H':
        return 
    for i,j in zip(k,k[1:]):
        if i==j and i=='H':
            return
    print(k)
def Try(n,k,i=0):
    if i==n:
        check(k)
        return
    for j in range(0,2):
        h='H'
        if j==0:
            h='A'
        Try(n,k+h,i+1)
def process():
    n=int(input())
    k=''
    Try(n,k)

t=int(input())
for i in range(0,t):
    process()
