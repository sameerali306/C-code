class Account:
    def __init__(self,acc_No,pas):
        self__AccountNo=acc_No
        self__Password=pas
    

    def resetPassword(self):
        print(self.__AccountNo) 
    
A1=Account("12344","abcd")  
print(A1.resetPassword() )
