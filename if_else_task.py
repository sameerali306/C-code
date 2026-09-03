name = input("Enter your name: ")
marks = int(input("Enter your marks (0-100): "))

# 1. Handle invalid inputs FIRST
if marks < 0 or marks > 100:
    print("Invalid entry... Marks must be between 0 and 100.")
else:
    percentage = (marks / 100) * 100  # Calculates percentage correctly
    print(f"\nStudent: {name}")
    print(f"Your percentage is: {percentage:.1f}%")

    # 2. Assign discount based on percentage
    if percentage >= 80:
        discount = "50%"
        emoji = "🎈🎈🎈🎉✨"
    elif percentage >= 70:
        discount = "25%"
        emoji = "🎉🎉🎉✨🎈"
    elif percentage >= 60:
        discount = "10%"
        emoji = "🎉🎉🎉✨🎈"
    elif percentage >= 50:
        discount = "2%"
        emoji = "🎉🎉🎉✨🎈"
    elif percentage >= 40:
        discount = "0%"
        emoji = "😐😐"
    else:
        discount = None

    # 3. Output the single final decision
    if discount and discount != "0%":
        print(f"{emoji} Congrats! You get a fee discount of {discount}")
    elif discount == "0%":
        print(f"{emoji} Sorry, you do not get any discount...")
    else:
        print("You failed. Try again next time...")