def add(x,y):
    return (x+y)
def sub(x,y):
    return x-y
def multi(x,y):
    return x*y
def div(x,y):
    return x/y
'''print(add(10,20))
print(sub(10,20))
print(multi(10,20))
print(div(10,20))'''
x=int(input("enter num \n"))
y=int(input("enter 2nd num \n"))
'''print(sub(x,y))
print(add(x,y))
print(multi(x,y))
print(div(x,y))'''
choice=input("enter ur choice")
if choice in ('1', '2', '3', '4'):
    if choice=='1':
        print(add(x,y))
    elif choice=='2':
        print(sub(x,y))
    elif choice=='3':
        print(multi(x,y))
    elif choice=='4':
        print(div(x,y))

