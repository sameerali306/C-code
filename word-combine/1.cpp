#include<iostream>
using namespace std;
int main(){
    int pin=125455;
    int pin2;
   do
   {
     
    cout<<"Enter your pin :";
    cin>>pin2;
    if (pin==pin2)
    {
        int Totalbalance=10000;
        // int withdrawAmount=100;
        // int depositAmount=2000;
        int choice;
        cout<<"Enter 1 to check balance\n";
        cout<<"Enter 2 to with amount \n";
        cout<<"Enter 3 to deposit balance\n";
        cout<<"Enter 4 to exit\n";

        cout<<"Enter your choice (1,2,3,4): ";
        cin>>choice;

        if (choice==1)
        {
            cout<<"Your total amount is :"<<Totalbalance;
        }else if (choice==2)
        {
            int amount;
            cout<<"Enter you with amount :";
            cin>>amount;
            cout<<"Your Withdraw amount is :"<<amount<<endl;
            cout<<"Your amount left is :"<<Totalbalance-amount<<endl;
            cout<<"Thank you for with draw amount😘😘😘👌";
        }else if (choice==3)
        {
             int amount;
            cout<<"Enter you with amount :";
            cin>>amount;
            cout<<"Your deposit amount is :"<<amount<<endl;
            cout<<"Your  total amount  is :"<<Totalbalance+amount<<endl;
            cout<<"Thank you for deposit amount✌👏✌✌✌";
        }else{
            cout<<"Thank you for using Atm";
        }
        
        

    }else{
        cout<<"Invalid password try again....\n";

    }
   } while (pin2!=pin);
   
    
}