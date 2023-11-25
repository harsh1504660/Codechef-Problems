# cook your dish here
t=int(input())
for i in range(t):
    (x1,x2,y1,y2) = map(int,input().split())
    x_dist=abs(x1-y1)
    y_dist=abs(x2-y2)
    dist=max(x_dist,y_dist)
    print(dist)