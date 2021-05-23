from ctypes import cdll
  
# kütüphane yükleyelim
lib = cdll.LoadLibrary('./lib.so')

print("2 sayi gir")
a,b=int(input()),int(input())
result=lib.addition(a,b)

print("toplam ",result)
