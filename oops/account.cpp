#include<iostream>
using namespace std;
class Bankaccount{
    private:
    int balance;

    public:
    void deposite(int amount){
        if(amount>0){
            balance=balance+amount;
        }else{
            cout<<"invalid amount...";
        }
    }

    void withdraw(int amount){
        if (amount<=balance)
        {
            balance=balance-amount;
        }else{
            cout<<"you do not have sufficent balance...";
        }
        
    }

    int getBalance(){
        return balance;
    }
};
int main(){

    Bankaccount sameer;
    sameer.deposite(1000);
    sameer.withdraw(200);
    cout<<sameer.getBalance();
    
} // namespace std;
