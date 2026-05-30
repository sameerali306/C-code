#include<iostream>
using namespace std;

class animal{
    public:
    void sound(){
        cout<<"animal has a sound of something"<<endl;

    };

};
class dog:public animal{
    public:
    void sound(){
        cout<<"barking"<<endl;
    }
};
class cat:public animal{
    public:
    void sound(){
        cout<<"meou meou"<<endl;
    }
};

int main(){
    cat c1;
    c1.animal::sound();//we force fully call the nimal sound for cat
}
