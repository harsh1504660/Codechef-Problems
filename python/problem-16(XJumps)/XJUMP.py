# cook your dish here
t=int(input())
for i in range(t):
    (x,y) = map(int,input().split())
    if x%y==0:
        num_step=int(x/y)
        print(num_step)
    else:
        step=int(x/y)
        t=x%y
        total_step = step+t
        print(total_step)