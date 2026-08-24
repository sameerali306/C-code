# constructor the below are parameterize constructor
# class Employee:
#     company="google"
#     def __init__(self,id,name,experience):
#         self.id=id
#         self.name=name
#         self.experience=experience
#     def message(self):
#         print("Here is our newly hire employee ",self.name,"with ",self.experience,"year of experience...")    

# E1=Employee(1,"faria hussain",2)
# # print(E1.id,E1.name,E1.experience,E1.company)
# E1.message()
# E2=Employee(2,"sameer ali",6)
# # print(E2.id,E2.name,E2.experience,E2.company)
# E2.message()
# E3=Employee(3,"umair ali",1)
# # print(E3.id,E3.name,E3.experience,E3.company)
# E3.message()
        
class Student:
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
    def average(self):
        sum=0
        for value in self.marks:
            sum +=value
        print("hi",self.name ,".your average score is", sum/3)    
s1= Student("sameer ali",[40,90,45])  
s1.average()

