import functools as f
a=[3,5,6,0,7]
b=f.reduce(lambda a,b:a+b,a)
print("The sum of all no in a list is:",b)