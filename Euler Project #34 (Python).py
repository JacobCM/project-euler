import math
def fact():
    Sum=0
    for i in range(1355000):
        if i>100000:
            if ((math.factorial((i%10)))+(math.factorial((i/10)%10))+(math.factorial((i/100)%10))+(math.factorial((i/1000)%10))+(math.factorial((i/10000)%10))+(math.factorial((i/100000)%10))) == i:
                Sum=Sum+i
        
        if i>10000 and i<100000:
            if ((math.factorial((i%10)))+(math.factorial((i/10)%10))+(math.factorial((i/100)%10))+(math.factorial((i/1000)%10))+(math.factorial((i/10000)%10)))== i:
                Sum=Sum+i
        if i>1000 and i<10000:
            if ((math.factorial((i%10)))+(math.factorial((i/10)%10))+(math.factorial((i/100)%10))+(math.factorial((i/1000)%10)))== i:
                Sum=Sum+i
        if i>100 and i<1000:
            if ((math.factorial((i%10)))+(math.factorial((i/10)%10))+(math.factorial((i/100)%10)))== i:
                Sum=Sum+i
                
    return Sum
