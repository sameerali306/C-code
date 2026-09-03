offer_course={"python","java","c++","javascript"}
student_Name=input("enter student name:")
student_age=int(input("enter student age:"))
final_result=(student_Name,student_age)
print(final_result)
course=input("enter the course name:").lower()
if course in offer_course and student_age>18:
    print(f"the student {student_Name} is eligible for the course {course}")
elif course not in offer_course:
    print(f"the course {course} is not available in the offer course") 
else:
    print(f"the student {student_Name} is not eligible for the course {course} because the age is less than 18")
          