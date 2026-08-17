
gussedNumber=11
i=10
while i>=1:
    x=int(input("enter a number :"))
    if x==gussedNumber:
        print("congratulation !🎉🎉 your guess is right🎉🎉")
        
        break
    else:
        print("Try again ") 
        i -=1
        print("you have ",i,"attempt left...")   
print("you attempt is finish...")
print("the guess number is ",gussedNumber)

