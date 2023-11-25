# cook your dish here
t=int(input())
for i in range(t):
    
    n=int(input())
    a=list(map(int,input().split()))
    res=0
    for j in range(n):
        if 10<=a[j]<=60:
            res +=1
    print(res)
                