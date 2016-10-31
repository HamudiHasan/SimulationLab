import random

import math

count=0
for num in range(1,10000):
    x = random.uniform(-1, 1)
    y = random.uniform(-1, 1)
    if math.sin(x)>=y :
        count +=1
print((count/10000)*4)
