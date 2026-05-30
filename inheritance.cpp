#include<iostream>
using namespace std;

class Animal{
    public:
    string property;


};
class dog:public Animal{
    public:
    void sound(){
        cout<<"barking...";
    };

    void display(){
        cout<<property<<endl;
        sound();
    }

};
int main(){
    dog d1;
    d1.property="eat";
    d1.display();

    
    
} // namespace std;

