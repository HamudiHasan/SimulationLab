import random


count=0
for num in range(1,10000):
    x = random.uniform(-1, 1)
    y = random.uniform(-1, 1)

    if x> 0 and y>0 and x+y<=1:
        count+=1
    if x< 0 and y<0 and x+y<=-1:
        count+=1
    if x<0 and y>0 and y-x<=1:
        count+=1
    if x>0 and y <0 and x-y>=1:
        count+=1
print((count/10000)*4)
