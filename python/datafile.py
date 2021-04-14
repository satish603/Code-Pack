f=open("user.txt","w")
f.write("User name"+"  "+"Password"+"\n")
y=91800
for x in range(100):
 f.write("jsw"+'%i'%y+"  "+"admin"+"\n")#f.write('%'
 y +=1
 #f.write('%int'%x)

 
f.close()
f=open("user.txt","r")
print(f.read())
