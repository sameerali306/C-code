name=input("Enter your name :")
marks=int(input("enter your marks (0-100) :"))
percentage=marks*100/100;
if(percentage>=80):
    format_percentage=f"{percentage}%"
    print(f"your percentage is {format_percentage}\n🎈🎈🎈🎉✨congrats you get a fee discount of 50%")
elif(percentage<80 and percentage>=70):
    format_percentage=f"{percentage}%"
    print(f"your percentage is {format_percentage}\n🎉🎉🎉✨🎈congrats you get a fee discount of 25%")
elif(percentage<70 and percentage>=60):
    format_percentage=f"{percentage}%"
    print(f"your percentage is {format_percentage}\n🎉🎉🎉✨🎈congrats you get a fee discount of 10%")    
elif(percentage<60 and percentage>=50):
    format_percentage=f"{percentage}%"
    print(f"your percentage is {format_percentage}\n🎉🎉🎉✨🎈congrats you get a fee discount of 2%") 
elif(percentage<50 and percentage>=40):
    format_percentage=f"{percentage}%"
    print(f"your percentage is {format_percentage}\n😐😐 sorry you do not get any discount ...")     

elif(percentage>100):
    print("invalid entry...")
else:
    print("you are fail try next time ..")    

