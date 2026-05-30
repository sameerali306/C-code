#include<iostream>
using namespace std;
class BankAccout{
    protected:
        int password=1234;
    
};

class Account:public BankAccout{
    public:
    void showPassword(){
        cout<<"Password :"<<password<<endl;
    }
};
int  main(){
    Account p1;
    p1.showPassword();
} // namespace std;

