class Account:
    def __init__(self, acc_No, pas):
        self.__AccountNo = acc_No  # Added dot (.) here
        self.__Password = pas      # Added dot (.) here

    def resetPassword(self):
        print(self.__AccountNo) 

A1 = Account("12344", "abcd")
A1.resetPassword()  # Called directly without wrapping in print()