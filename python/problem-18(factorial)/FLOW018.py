# cook your dish here
t=int(input())
for i in range(t):
    def factrorial(n):
        if n==0:
            return 1
        else:
            result= n*factrorial(n-1)
            return result
    l=int(input())
    print(factrorial(l))