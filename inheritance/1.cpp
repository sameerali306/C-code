#include<iostream>
using namespace std;

class Animals{
    public:
    string name;
    public:
    void Eat(string name){
        cout<<"the "<<name<<" is  eating..\n";
    };

};

class Dog:private Animals{
    public:
    void performEat(string name){
        Eat(name);

    }
    void Voice(){
        cout<<"the dog is barking.....";
    }
};

int main(){
    Dog D1;
    D1.performEat("dog");
    D1.Voice();
}
