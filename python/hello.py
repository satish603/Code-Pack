print("hello world!")
if 5 > 2:
 print("Five is greater than two!")
x=10
y=20
z=x+y
print(z)
z=x%y
print(z)
print(type(z))
k=float(22.1)
print(k)
j=float("22.1")
print(j)
print(x,y,z,k,j)
a="hello how are you"
print(a)
'''Multi line
comment'''
#single line comment
print(a[3:8])
print(a[-6:-3])
print(len(a))
print(a.lower())
print(a.upper())
print(a.strip())
print(a.replace("hello","satish"))
print(a.split("@"))
ch="hello" in a
print(ch)
b=" i am fine"
c=a+"\n \t\t"+b
print(c)
past=" jo bhi hai{}"
print(past.format(b))
quantity = 3
itemno = 22
price = 265
myorder = "I want to pay {2} rs for {0} pieces of item {1}."
print(myorder.format(quantity, itemno, price))
xx="ignoring \"quotes\""
print(xx)
takein=input("enter your name")#take inpute from user
print("name ",takein)
