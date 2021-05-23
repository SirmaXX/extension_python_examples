from setuptools import Extension, setup

module = Extension("demo",
                  sources=[
                    'demo.c'
                  ])
setup(name='demo',
     version='1.0',
     description='example demo package',
     ext_modules=[module])
