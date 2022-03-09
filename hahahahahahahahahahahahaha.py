T=int(input('T='))
S="HA"
for i in range(T):
    a=0
    b=0
    c=0
    d=0
    lst=[]
    list=[]
    N=int(input('N='))
    for i in range(2**(N-2)):
        lst.append(S)
    if N ==2:
        print(S)
        continue
    else:
        for i in range(N-2):
            a+=1
            b=0
            for j in range(len(lst)):
                lst[j]+=S[d%2]
                if b==(len(lst)//(2**a)-1):
                    d+=1
                    b=0
                    continue
                b+=1
    for i in lst:
        d=1
        for j in range(len(i)-1):
            if (i[j]==i[j+1] and i[j]=='H') or i[-1]=='H':
                d=0
                break
        if d==1:list.append(i)
    for i in range(len(list)):
        print(list[i])
