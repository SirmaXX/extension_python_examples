

import sys

sys.path.insert(0, './build/lib.linux-x86_64-3.6/')
# specify the directory containing the extension module here
import demo
a,b=int(input()),int(input()) 
result= demo.DemoLib_addition(a,b)
print("toplam ",result)
