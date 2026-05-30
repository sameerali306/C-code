#include<iostream>
using namespace std;

class animals{
    public:
    void sleep(){
        cout<<"i am sleeping..";
    }
    void eat(){
        cout<<"i am eating...";
    };
};

class dog:public animals{
    public:
    void sound(){
        cout<<"barking...";
    };

};
class cat:public animals{
    public:
    void sound(){
        cout<<"meow...";
    };

};

int main(){
    cat c1;
    c1.sound();
    c1.sleep();
}