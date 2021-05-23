from ctypes import cdll
  
lib = cdll.LoadLibrary('./mylib.so')

print("2 sayi gir")
a,b=int(input()),int(input())
result=lib.product(a,b)

print("carpim ",result)
