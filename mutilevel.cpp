#include<iostream>
using namespace std;

class animal{
    public:
    void eat(){
        cout<<"animal is eating.."<<endl;
    };
};
class dog:public animal{
    public:
    void sound(){
        cout<<"barking..."<<endl;
    };
};
class puppy:public dog{
    public:
    void walk(){
        cout<<"puppy is walking"<<endl;
    };
};

int main(){
    puppy p1;
    p1.walk();
    p1.eat();
    p1.sound();
}