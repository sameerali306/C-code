# with open("demo.txt","r") as f:
#     data=f.read()
#     print(data)

# with open("demo.txt","w") as f:
#     f.write("this is new data ")   

# with open("demo.txt","r") as f:
#     data=f.read()
#     print(data)

# import os

with open("practice.txt","w") as f:
    f.write("hi everyone \n")

with open("practice.txt","a") as f:
    f.write("we are learning file i/o \n")
with open("practice.txt","a") as f:
    f.write("using java. \n")
with open("practice.txt","a") as f:
    f.write("I like programming in java .")
with open("practice.txt","r") as f:
    data=f.read()
new_data=data.replace("java","python")  
print(new_data)

with open("practice.txt","w") as f:
    f.write(new_data)

 
     