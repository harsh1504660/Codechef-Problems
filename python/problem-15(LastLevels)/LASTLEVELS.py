# cook your dish here
t = int(input())
for i in range(t):
    (x,y,z) = map(int,input().split())
    if x<=3:
        time_req = x*y
        print(time_req)
    else :
        if x%3==0:
            a=int((x/3)-1)
            b=a*z
            c=x*y
            print(b+c)
        else :
            a=int(x/3)
            b=a*z
            c=x*y
            print(b+c)