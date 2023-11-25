# cook your dish here
t=int(input())
for i in range(0,t):
    (x,y) = map(int,input().split())
    q=x*(107/100)
    if y<=q:
        print("yes")
    else :
        print("no")