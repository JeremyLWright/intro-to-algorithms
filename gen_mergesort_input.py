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
    def load_array(self, f, array, array_name):
        f.write("for(int i = 0; i < %d; ++i){\n"%len(array))
        for i in range(len(array)):
            f.write("%s[i] = %d;\n"%(array_name, array[i]))
        f.write("}\n");

    def output(self, array):
        f = open("TestGenRandom.cpp", "a")
        f.write("\n\nTEST(RandomGenerated, Len_%d\n)"%(len(array)))
        f.write("uint32_t* array = new uint32_t[%d];\n"%(len(array)+1))
        f.write("uint32_t* sorted = new uint32_t[%d];\n"%(len(array)+1))
        f.write("MergeSort m = MergeSort(%d);\n"%(len(array)+1))
        self.load_array(f, array, "array")
        array.sort()
        self.load_array(f, array, "sorted")
        f.write("m.mergesort(array, 0, %d);\n"%(len(array)+1))
        f.write("for(int i = 0;	i < %d; ++i)\nEXPECT_EQ( array[i], sorted[i]);"%len(array))

for file_num in range(15):
    y = []
    f = FileIntrepreter(file_num)
    for i in range(randint(10000, 500000)):
        y.append(randint(0, pow(2,32)-1))
    f.output(y)
    
