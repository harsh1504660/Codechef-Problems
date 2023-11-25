# cook your dish here
t = int(input())
for i in range(t):
    a,b,a1,b1,a2,b2 = map(int , input().split())
    l1 = [a1,b1]
    l2 = [a2,b2]
    rf = [a,b]
    flag1 = 0
    flag2 = 0
    for i in range(2):
        if l1[i] in rf:
            flag1 += 1
        elif l2[i] in rf:
            flag2+=1
    if flag1==2:
        print('1')
    elif flag2==2:
        print('2')
    else:print('0')