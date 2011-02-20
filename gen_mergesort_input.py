from random import randint
from math import pow

class OutputIntrepreter():
    def __init__(self, test_number):
        self.test_num = test_number

class FileIntrepreter(OutputIntrepreter):
    def write_to_file(self, array, direction):
        f = open("test%d.%s"%(self.test_num, direction), "w")
        f.write(str(len(array))+"\n")
        for j in array:
            f.write(str(j)+"\n")
        f.close()

    def output(self, array):
       self.write_to_file(array, "in")
       array.sort()
       self.write_to_file(array, "out")

class WriteGTest(OutputIntrepreter):
    pass

for file_num in range(45):
    y = []
    f = FileIntrepreter(file_num)
    for i in range(randint(10000, 500000)):
        y.append(randint(0, pow(2,32)-1))
    f.output(y)
    
