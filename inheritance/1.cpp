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

class Dog:public Animals{
    public:
    void Voice(){
        cout<<"the dog is barking.....";
    }
};

int main(){
    Dog D1;
    D1.Eat("dog");
    D1.Voice();
}
