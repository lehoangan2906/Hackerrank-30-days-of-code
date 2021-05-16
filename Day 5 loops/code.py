import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input().strip())
    if 2 <= n <= 20: 
        for i in range(1,11):
            print(str(n) + " x " + str(i) + " =" + str(n*i))
