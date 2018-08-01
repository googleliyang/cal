#/usr/bin/env python
from ctypes import *
import os
libtest = cdll.LoadLibrary(os.getcwd() + '/cal.so')
libtest.display()
