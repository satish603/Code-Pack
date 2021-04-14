thislist=["c","c++","java","kotlin","python"]#can use single or double inverted comma
print(thislist)
print(thislist[2])
print(thislist[2:4])
print(thislist[-4:-2])
print(thislist[2:])
print(thislist[:2])
thislist.append("andriod studio")#adding from last
print(thislist)
thislist.insert(2,"MySql")#adding in disier place
print(len(thislist))
thislist.append("hello")
print(thislist)
thislist[7]="MangoDB"
print(thislist)
for x in thislist:
    print(x)
a=input("enter name ")
thislist.append(a)
for x in thislist:
    print(x)
print(thislist)
b=input("enter to check")
if b in thislist:
    print("yes,'its their")
else:
    print("nhi hai")    #space nhi dekha hai

thislist.insert(2,"insert")
print(thislist) #add bhi hoga and next index shift bhi hoga
thislist.remove("insert")#delete by name 
print(thislist)
thislist.pop()
print(thislist)
thislist.pop(2)#delete by index
print(thislist)
del thislist[2] # to delete list without delete all
print(thislist)
#thislist.clear() #to clear list
#print(thislist)
list1=thislist.copy()
print(list1)
list2=list1+thislist
print(list2)
del list2
for x in list1:
    thislist.append(x)
print(list1)
list3=list(("satish","teju","arijit","anvi","adi"))
print(list3)
