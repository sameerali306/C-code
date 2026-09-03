# # Basic operation 
# # concatenation join the two string
# # firstName="sameer"
# # lastName="ali"
# # fullName=firstName+lastName
# # print(len(firstName))
# # print(len(lastName))
# # print(fullName[-5:-2])
# firstName="faria"
# lastName="hussain"
# fullName=firstName+" "+lastName
# # print(fullName)
# # print(len(fullName))
# # print(fullName[:5])
# # print(fullName[:])
# # print(fullName[:5])
# # print(fullName[-5:-1])

# # # string functions
# # print(fullName.endswith("ali"))
# # print(fullName.replace("sameer ali","faria hussain"))
# # print(fullName.find("ali"))
# # print(fullName.count("l"))
# # print(fullName.endswith("ali"))
# # print(fullName.startswith("faria"))
# # print(fullName.replace("hussain","sameer"))
# # print(fullName.find("faria"))
# # print(fullName.count("i"))



# # name=input("enter your name :")
# # print(len(name))
# # print(name.find("$"))

# # number=int(input("enter a number :"))
# # result=("odd","even")[number%2==0]
# # print(result)

# # a=int(input("enter number :"))
# # b=int(input("enter number :"))
# # c=int(input("enter number :"))
# # if(a>b and a>c):
# #     print("the number is greater",a)

# # elif(a<b and b>c):
# #     print("the number is greater",b)
# # else:
# #       print("the number is greater",c)  

# num1=int(input("enter a first number :"))
# num2=int(input("enter a second number :"))
# result=("num 2 is greater..","num 1 is greater")[num1>num2]
# # print(result)


# # number=int(input("enter a number :"))
# # result=("no the number is not divisible by 7","yes the number is  divisible by 7")[number%7==0]
# # print(result)

sentence="     my name is sameer ali    "
# print(sentence)
# print(sentence.upper())
# print(sentence.lower())
# print(sentence.capitalize()) #capatilize the very first letter 
# print(sentence.title()) #capatilize the first letter of every word
# print(sentence.swapcase()) # change the small letter to capital and capital to small letter

# #if we have to find any word letter in the sentence we have use the find method
# print(sentence.find("ali")) # it will return the index of the first letter of the word
# print(sentence.find("java")) # it will return -1 if the word is not present in the sentence
# print(sentence.index("sameer")) # it will return the index of the first letter of the word
# print(sentence.count("sameer")) # it will return the number of times the word appears in the sentence
# print(sentence.split("")) # it will split the sentence into a list of words
# print(sentence.replace("sameer","faria"))
# print(sentence)
# print(sentence.strip()) #the strip method will remove the white space from the start and end of the string
# print(sentence.lstrip()) #the lstrip method will remove the white space from the start of the string
# print(sentence.rstrip()) #the rstrip method will remove the white space from the end of the string

# validation check in the string 
username=input("enter you username :")
if(username.isalnum()): #the username consist of number and letter only than it will return true
    print("you user name containt alnum")
elif(username.isalpha()): #the username consist of letter only than it will return true
    print("your username contain alpa only")
elif(username.isdigit()):#the username consist of the digit only than it will return true
    print("your username contain digit only")
else:
    print("your username contain special character")
