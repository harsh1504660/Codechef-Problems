# cook your dish here
T = int(input())
for i in range (0,T):
    (N,M,K)=map(int,input().split())
    if M>=N+K:
        print("yes")
    else :
        print("no")