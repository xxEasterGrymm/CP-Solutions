#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

arr = list(map(int, input().strip().split(' ')))
max=-sys.maxsize-1
min=sys.maxsize
sum=0
for x in arr:
    sum+=x
    if x>max:
        max=x
    if x<min:
        min=x
print (sum-max,sum-min)