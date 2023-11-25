# cook your dish here
t=int(input())
for i in range(t):
    (n,L) = map(int,input().split())
    if (n<L):
        total=n
        print(n)
    else :
        r=n-L
        totalR=2*r
        total_shoe = totalR+L
        print(total_shoe)
                
        
        