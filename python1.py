A,B=2,3
txt="@"
#print(2*txt*3) #the @ is print 6 time 

a,b="2",3
txt="$"
#print((a+txt)*b)#the 2$ is print three time

a,b=2,3
c=a//b #integer division the finaal answere is converted to lower integer
#print(c,a/b)

a,b=3,-2 #in case if the denominator is negative the remainder will come in negative and all other case will postive
c=a%b
#print(c)

name=input("enter your name :")
age=int(input("enter your age :"))
print("my name is" ,name, "and my age is ",age,)