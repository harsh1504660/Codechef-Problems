# cook your dish here
t=int(input())
for i in range(0,t):
    (a,b) = map(int,input().split())
    if a>b:
        print(">")
    elif a<b:
        print("<")
    else :
        print("=")