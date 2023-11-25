# cook your dish here
t = int(input())
for i in range(t):
    N,A,B,C = map(int,input().split())
    total = A+C
    if (B<N):
        print('NO')
    else:
        if total >= N:
            print('YES')
        else:
            print('NO')
    