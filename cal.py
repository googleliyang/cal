#/usr/bin/env python

import sys
import time;  
line = sys.stdin.readline()
line = int(line)
line += 1
j = 0
start_time = time.time()
for i in range(1, line):
    j += i

end_time = time.time()
print "the res is %s" % (j)
print "the time is %s s" % ((end_time - start_time))
