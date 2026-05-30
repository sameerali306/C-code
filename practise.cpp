#include<iostream>
using namespace std;
class BankAccount{
    private:
    int password;

    public:
    void setPassword(int p){
        password=p;
    }

    void login(){
       int inputPass=1234;
        if(inputPass==password){
            cout<<"login successfully";
        }else{
            cout<<"login failed";
        }
    }
};
int main(){
    BankAccount p1;
    p1.setPassword(124);
    p1.login();
}