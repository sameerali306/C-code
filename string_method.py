# Basic operation 
# concatenation join the two string
# firstName="sameer"
# lastName="ali"
# fullName=firstName+lastName
# print(len(firstName))
# print(len(lastName))
# print(fullName[-5:-2])
firstName="faria"
lastName="hussain"
fullName=firstName+" "+lastName
print(fullName)
# print(len(fullName))
# print(fullName[:5])
# print(fullName[:])
# print(fullName[:5])
# print(fullName[-5:-1])

# # string functions
# print(fullName.endswith("ali"))
# print(fullName.replace("sameer ali","faria hussain"))
# print(fullName.find("ali"))
# print(fullName.count("l"))
print(fullName.endswith("ali"))
print(fullName.startswith("faria"))
print(fullName.replace("hussain","sameer"))
print(fullName.find("faria"))
print(fullName.count("i"))



# name=input("enter your name :")
# print(len(name))
# print(name.find("$"))

# number=int(input("enter a number :"))
# result=("odd","even")[number%2==0]
# print(result)

# a=int(input("enter number :"))
# b=int(input("enter number :"))
# c=int(input("enter number :"))
# if(a>b and a>c):
#     print("the number is greater",a)

# elif(a<b and b>c):
#     print("the number is greater",b)
# else:
#       print("the number is greater",c)  

num1=int(input("enter a first number :"))
num2=int(input("enter a second number :"))
result=("num 2 is greater..","num 1 is greater")[num1>num2]
print(result)


# number=int(input("enter a number :"))
# result=("no the number is not divisible by 7","yes the number is  divisible by 7")[number%7==0]
# print(result)

