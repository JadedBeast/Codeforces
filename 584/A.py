n,t=input().split()
n=int(n)
result=""
if(int(t)==10 and n==1):
    print("-1")
else:
    if(int(t)==10 and n>1):
        t="0"
        result="1"
        n-=1
    for i in range (n):
        result+=t
    print(result)
