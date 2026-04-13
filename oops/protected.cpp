#include<iostream>
using namespace std;

class parent{
    protected:
    int money;
};

class child:public parent{
    public:
    void setMoney(int m){
        money=m;
    }
    void showmoney(){
        cout<<"you balance is :"<<money;
    }
};
int main(){
    child p;
    p.setMoney(100);
    p.showmoney();
} // namespace std;
