from random import randint
from math import pow


for file_num in range(15):
    y = []
    for i in range(randint(10000, 500000)):
        y.append(randint(0, pow(2,32)-1))

    f = open("test%d.in"%file_num, "w")
    f.write(str(len(y))+"\n")
    for j in y:
        f.write(str(j)+"\n")
    f.close()

    y.sort()

    f = open("test%d.out"%file_num, "w")
    f.write(str(len(y))+"\n")
    for j in y:
        f.write(str(j)+"\n")
    f.close()
