def check(lst,n):
    if lst==lst[::-1]:
        print(*lst)    
def Try1(lst,n,i):
    if i==n:
        check(lst,n)
    else:
        for j in range(0,2):
            lst.append(j)
            Try1(lst,n,i+1)
            lst.pop(i)
n=int(input())
i=0
lst=[]
Try1(lst,n,i)