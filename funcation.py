# def sum(a,b):
#     return a+b
    
# result=sum(10,10)
# # print(result)

# def avg(num1,num2):
#     sum=num1+num2
#     divide=sum/2
#     return divide
# result1=avg(3,3)
# # print(result1)


# number=[1,2,3,4,5,6,7,7,9]
# fruits=["apple","mango","banana","pineapple"]
# def length(number):
#     return len(number)
# ans=length(fruits)
# # print(ans)

# # def fun(list):
# #     for item in list:
# #         # print(item, end=" ")
# # fun(fruits)        

number=6
def factorial(n):
    i=1
    fac=1
    for i in range(1,(number+1)):
        fac *=i
        # print(fac)
factorial(number)   


def conversion(pak):
    values_result= pak*283
    # print(pak,"pakistani rupees =",values_result,"USD")
conversion(10)
conversion(35)

# number=int(input("enter a number :"))
# def calculate():
#     if(number%2==0):
#         print("number is even...")
#     else:
#         print("number is odd...")
# calculate()        


def cal_sum(n):
    if n==0:
        return 0
    return cal_sum(n-1) + n
total=cal_sum(5)    
print(total)




        


