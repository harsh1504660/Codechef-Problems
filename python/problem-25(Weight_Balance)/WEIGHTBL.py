# cook your dish here
t = int(input())
for i in range(t):
    w1 , w2 , x1 , x2 , M = map(int,input().split())
    inc_in_w = w2-w1 
    low_per_m = M*x1 
    high_per_m = M*x2
    
    if inc_in_w < low_per_m:
        print(0)
    #elif inc_in_w == low_per_m or inc_in_w == high_per_m :
        #print(1)
    else :
        if low_per_m <= inc_in_w <= high_per_m:
            print(1)
        else :
            print(0)