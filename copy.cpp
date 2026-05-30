#include<iostream>
using namespace std;
class Teacher{
    public:
    string name;
    int age;

    //normal constructor
    Teacher(string n,int a){
        name=n;
        age=a;

    }

    //copy constructor
    Teacher(const Teacher &s){
        name=s.name;
        age=s.age;
    }

};

int main(){
    Teacher s1("Ali",20);
    Teacher s2=s1;
}