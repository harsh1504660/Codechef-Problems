# cook your dish here
t=int(input())
for i in range(0,t):
    x,y=map(int,input().split())
    if (x<y):
        i=0
        while (x<y):
           i=i+1
           x=x+1
        print(i)
    else :
        j=0
        while (x>y):
            j=j+1
            x=x-1
        print(j)