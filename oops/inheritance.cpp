#include<iostream>
using namespace std;
class Parent{
    private:
    int balance;

    public:
    void deposite(int amount ){
        if(amount>0){
            balance +=amount;
        }else{
            cout<<"invalid amount";
        }
    }

    void widthdraw(int amount){
        if(amount<=balance){
            balance -=amount;
        }else if(amount>balance){
            cout<<"you do have insufficent amount...";
        }else{
            cout<<"enter a valid amount....";
        }
    }
    void show(){
        cout<<balance;
    }


};

class child:public Parent{ 
};
int main(){
    child sameer;
    sameer.deposite(2000);
    sameer.show();
} // namespace std;
