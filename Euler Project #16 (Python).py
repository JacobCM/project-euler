x=2**1000
n=1
d=0
while x/n!=0:
    n=n*10
    d=d+(x%n)/(n/10)
print d
