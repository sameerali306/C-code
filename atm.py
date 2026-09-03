account=[]
print("===ATM Menu===")
print("1.Check Balance")
print("2.Withdraw Balance")
print("3.Deposit Balance")
print("4.Exit")

choice=input("Enter your choice :")
if(choice==1):
    print(account)
elif(choice==2):
    amount=input("enter you amount :")
    account -=amount 
elif(choice==3):
    amount=input("enter you amount :")
    account.append +=amount    
else:
    exit;      