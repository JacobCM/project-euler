def fib(n):
    num=0
    a=0
    b=1
    for c in range(n):
        num=a+b
        a=b
        b=num
    return num

c=1
sum=0

while (fib(c)<4000001):
    if fib(c)%2==0:
        sum=sum+fib(c)
    c+=1

print sum