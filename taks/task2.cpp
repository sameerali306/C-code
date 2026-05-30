#include<iostream>
using namespace std;
class Payment{
    protected:
    double amount;
    
    public:
     virtual void authorize(){
        cout<<"generic payment authorization..\n";
    };
    
};

class CreditCard:public Payment{
    public:
     void authorize(){
        cout<<"Authorizing credit card validation chip and pin...\n";
    };
};
class Paypal:public Payment{
    public:
     void authorize(){
        cout<<"authorize paypal: redirecting to secure gatway\n";
    };
};

int main(){
   CreditCard obj;
   Payment* ptr=&obj;
   ptr->authorize();

   Paypal obj1;
   Payment* ptr1=&obj1;
   ptr1->authorize();
    
}


