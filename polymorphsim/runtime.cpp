#include<iostream>
using namespace std;

class Payment{
    public:
    virtual void Pay(){
        cout<<"Processing Payment\n";

    }
};

class CreditCard:public Payment{
    void Pay(){
        cout<<"paid using CreditCard\n";
    }
};

class Paypal:public Payment{
    void Pay(){
        cout<<"paid using paypal\n";
    }
};

class Crypto:public Payment{
    void Pay(){
        cout<<"Paid using crypto....\n";
    }
};
int main(){
Payment* P;

CreditCard c;
Paypal pp;
Crypto cr;

P=&c;
P->Pay();

P=&pp;
P->Pay();

P=&cr;
P->Pay();
}