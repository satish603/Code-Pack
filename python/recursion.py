def recursion(x,y):
    z=x+y
    print(z)
    if(z==100):
        return z
    recursion(z,10)
print(recursion(10,20))
