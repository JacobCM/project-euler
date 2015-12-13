counter=0
for i200 in range(2):
    for i100 in range(3):
        if 200*i200+100*i100 > 200:
            break
        for i50 in range(5):
            if 200*i200+100*i100+50*i50 > 200:
                break
            for i20 in range (11):
                if 200*i200+100*i100+50*i50+20*i20 > 200:
                    break
                for i10 in range (21):
                    if 200*i200+100*i100+50*i50+20*i20+10*i10 > 200:
                        break
                    for i5 in range (41):
                        if 200*i200+100*i100+50*i50+20*i20+10*i10+5*i5 > 200:
                            break 
                        for i2 in range (101):
                            if 200*i200+100*i100+50*i50+20*i20+10*i10+5*i5+2*i2 > 200:
                                break
                            for i1 in range (201):
                                if 200*i200+100*i100+50*i50+20*i20+10*i10+5*i5+2*i2+i1 == 200:
                                    counter+=1

print counter

