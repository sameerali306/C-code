# marks=input("enter your marks :")
# if (marks>"50"):
#     print("your are pass the exam")
# else:
#     print("you are fail the exam ")    

# A=int(input("enter A:"))
# G=input("M/F :")

# if((A==1 or A==2) and G=="M"):
#     print("the fee is 100")
# elif(A==3 or A==4 or G=="F"):
#     print("the fee is 200")    
# elif(A==5 and G=="M"):
#     print("the fee is 300")    
# else:
#     print("no fee")    

# food=input("food :")
# eat= "Yes" if food=="cake" else "no"
# print(eat)

# clever if/Ternary operator
# age=int(input("enter your age :"))
# vote=("no","yes")[age>=18]
# print(vote)

# marks=int(input("enter your marks :"))
# result=("pass","fail")[marks<50]
# print(result)

# time=input("enter you time :")
# drink=("water","tea")[time=="morning" ]
# print(drink)

salary=int(input("enter your salary :"))
tax=salary*(0.1,0.5)[salary>50000]
print(tax)
