class Account:
    def __init__(self,account_no,balance):
        self.account_no=account_no
        self.balance=balance

    def withdrawMoney(self,amount):
         self.balance -=amount
         print("Rs.",amount ,"successfully widthdraw from accout",self.account_no) 
         print("your total amount is :",self.bank_balance())

    def addmoney(self,amount):
         self.balance +=amount
         print("Rs .",amount ,"was successfully add  to accout",self.account_no) 
         print("your total amount is :",self.bank_balance())


    
    def bank_balance(self):
        print("the account number",self.account_no,"has balance",self.balance)
        

A1=Account(12345,10000)  
A1.withdrawMoney(1000)
A1.addmoney(400)
 
        