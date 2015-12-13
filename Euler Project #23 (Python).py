import math

def abundantnums():
    Sum=0
    for i in range(28124):
        check=True
        for j in range(1, (i/2)+1):
            if abundant(j) and abundant(i-j):
                check=False
                break;
        if check:
            Sum=Sum+i
        if i%1000==0:
            print i,Sum
    return Sum

def abundant(n):
    if n<12:
        return False

    
    Sum=0
    if (int)(math.sqrt(n))*(int)(math.sqrt(n))==n:
        for i in range(2,n):
            if n%i==0:
                Sum=Sum+i

    else:
        for i in range(2,(int)(math.sqrt(n))+1):
            if n%i==0:
                Sum=Sum+i+(n/i)
    Sum+=1
    if Sum>n:
        return True
    else:
        return False
