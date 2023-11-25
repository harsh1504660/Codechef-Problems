t= int(input())
for i in range(t):
    N, X = map(int, input().split())
    d = {}
    for j in range(N):
        s,r = map(int,input().split())
        d[r] = s
    n_d = {}
    for key,value in d.items():
        if value <= X:
            n_d[key] = value
    all_v = list(n_d.keys())
    max_s = max(all_v)
    print(max_s)