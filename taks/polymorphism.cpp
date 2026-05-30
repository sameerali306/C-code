#include<iostream>
using namespace std;

 class transaction{
    public:
    int amount;
    void processPayment(int amount){
        cout<<"processing the cash payment of =" <<amount<<endl;
    }

    void processPayment( double amount,int currency){
        cout<<"process the international payment $ :"<<currency<< " and amount :"<<amount<<endl;

    }


 };

 int main(){
    transaction t1;
    t1.processPayment(1000);
    t1.processPayment(99.99,1);
 }
