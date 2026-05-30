#include<iostream>
using namespace std;

class BankAccount{
    private:
    double balance;
    int password;

    public:
    void widthdraw(int amount){
        if (amount<=balance)
        {
            balance =balance-amount;
        }else{
            cout<<"you have insufficent amount in your account";
        }
    }

    void deposite(int amount){
        if (amount>0)
        {
           balance +=amount;
        }    
        
    }
    void CheckBalance(){
        cout<< balance;
    }
};

int main(){
    BankAccount s1;
    s1.deposite(2000);
    s1.CheckBalance();
    s1.widthdraw(1000);
    s1.CheckBalance();
}