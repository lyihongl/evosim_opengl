import sys
import os

if __name__ == '__main__':
    file_name = sys.argv[1]
    if(os.path.exists(f'./src/{file_name}.cpp') or os.path.exists(f'./inc/{file_name}.hpp')):
        print("error, file already exists")
        os._exit(-1)

    def gen_header(file_name):
        res = f'#ifndef {file_name.upper()}_H\n'\
            + f'#define {file_name.upper()}_H\n'\
            + 'namespace EvoSim{};\n'\
            + '#endif'
        return res

    def gen_cpp(file_name):
        res = f'#include "../inc/{file_name}.hpp"'
        return res

    # print(gen_header(file_name))
    # print(gen_cpp(file_name))
    with open(f'./inc/{file_name}.hpp', 'w+') as f:
        f.write(gen_header(file_name))
    #with open(f'./src/{file_name}.cpp', 'w+') as f:
    #    f.write(gen_cpp(file_name))
