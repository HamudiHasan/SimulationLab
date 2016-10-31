#Finding area of integration
import math
import random

def function(x):
    return math.cos(2*x)

pi = 3.14159
count=0
count2=0
iterration = 100000
for i in range ( 1,iterration):
    x = random.uniform(0, pi*12)
    y = random.uniform(-1, 1)

    if y >=0 and y <= function(x):
        count +=1

    elif y <= 0 and y >= function(x):
        count +=1
print(((count *(12*pi-0) * (1+1))/iterration))