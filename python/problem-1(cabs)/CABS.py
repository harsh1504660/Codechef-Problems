# cook your dish here
T=int(input())
for i in range(0,T):
    X,Y = map(int,input().split())
    if X>Y:
        print("second")
    elif X==Y:
        print("any")
    else:
        print("first")
