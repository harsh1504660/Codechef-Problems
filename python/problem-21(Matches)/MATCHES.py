# cook your dish here
t=int(input())
for i in range(t):
    (a,b) = map(int,input().split())
    matches=[6,2,5,5,4,5,6,3,7,6]
    sum1=str(a+b)
    leng = len(sum1)
    digits=[]
    for i in range(leng):
        digits.append(sum1[i])
    add=0
    for k in digits:
        k=int(k)
        for j in matches:
            add = matches[k] +add
    print(int(add/10))
    
    
    