# cook your dish here
t=int(input())
for i in range(t):
    (x,y,z) = map(int,input().split())
    need_pt=y-x
    match_pt=2*z
    if need_pt<=match_pt:
        print("yes")
    else:
        print("no")