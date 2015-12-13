
pal=True
max=0

for i1 in range(900):
    c1=i1+100
    for i2 in range(900):
        c2=i2+100
        c=c1*c2
        if (c<=99999):
            if (c%10!=c/10000):
                check=False
            if ((c%100)/10!=(c/1000)%10):
                check=False
        
        else:
            if (c%10!=c/100000):
                pal=False
            if ((c%100)/10!=(c/10000)%10):
                pal=False
            if ((c%1000)/100!=(c%10000)/1000):
                pal=False
        if (pal==True and c>max):
            max=c
        pal=True

print max