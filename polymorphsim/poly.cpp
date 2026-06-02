#include <iostream>
using namespace std;

class animals{
    public:
    virtual void sound(){
        cout<<"the animals make a sound..";


    }
};
class cat:public animals{
    void sound(){
        cout<<"wow wow..";
    }
};
int main(){
    animals* p;
    cat c;
    p=&c;
    p->sound();

}