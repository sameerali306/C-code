#include<iostream>
using namespace std;

class BankAccount{
    private:
    string AccountHolder;
    int password;
    int balance;

    public:
    void Deposite(int amount,int p){
        if(amount>0 && password==p){
            balance +=amount;

        } else{
            cout<<"Invalid amount is enter";
        }
    }

    void widthdraw(int amount,int p){
        if(amount>0 && amount<balance){
            balance -=amount;
        } else{
            cout<<"Invalid amount";

        }
    }

    void getbalance(int balance,int password){
        cout<<balance;
    }

    public:
    void setPassword(int p){
        password=p;

    }

};
int main(){
    BankAccount P1;
    P1.setPassword(2345);
    p1.deposite(2000,43434);

}