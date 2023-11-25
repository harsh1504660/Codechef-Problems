# cook your dish here
t=int(input())
for i in range (0,t):
    (a,b,c) = map(int,input().split())
    if a<b:
        if b<c:
            print(c)
        else :
            print(b)
    elif a<c:
        print(c)
    else :
        print(a)