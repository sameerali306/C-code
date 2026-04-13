#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    double deposite(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        };
    }

    void withdraw(double amount){
        if(amount<=balance){
            balance -=amount;
        }
    }

    void getBalance(){
        cout<<"you total amount is :"<<balance<<endl;

    }
    void display()
    {
        cout << "you amount is =" << balance;
    }
};
int main()
{
    BankAccount person1;
    person1.deposite(1000);
    person1.getBalance();
    person1.withdraw(200);
    person1.display();
} // namespace std;
