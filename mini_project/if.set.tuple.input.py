# offer_course={"python","java","c++","javascript"}
# student_Name=input("enter student name:")
# student_age=int(input("enter student age:"))
# final_result=(student_Name,student_age)
# print(final_result)
# course=input("enter the course name:").lower()
# if course in offer_course and student_age>18:
#     print(f"the student {student_Name} is eligible for the course {course}")
# elif course not in offer_course:
#     print(f"the course {course} is not available in the offer course") 
# else:
#     print(f"the student {student_Name} is not eligible for the course {course} because the age is less than 18")
          

# 1. Available courses stored in a Set
offer_courses = {"python", "java", "c++", "javascript"}

# 2. Taking User Inputs
student_name = input("Enter student name: ")
student_age = int(input("Enter student age: "))

# Storing student data in a Tuple
student_info = (student_name, student_age)

# Unpacking the tuple
name, age = student_info

# 3. Age Validation using the `raise` keyword
if age < 18:
    raise ValueError(f"Student '{name}' must be at least 18 years old to enroll. (Current age: {age})")

# 4. Course Selection & Set Membership Check
course = input("Enter the course name: ").strip().lower()

if course in offer_courses:
    print(f"\nSuccess! Student {name} (Age: {age}) is successfully enrolled in '{course}'.")
else:
    print(f"\nFailed: The course '{course}' is not offered in our system.")