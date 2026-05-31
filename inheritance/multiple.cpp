#include<iostream>
using namespace std;

class Father{
    public:
    string name;
    string color;

    public:
    void haircolor(string name , string color){
        cout<<"the hair color of "<<name<<" is "<<color<<endl;
    }
};

class Mother{
    public:
    string behavior;
    string name;

    public:
    void habit(string name){
        cout<<"the behavior of "<<name <<" is very good..\n";
    }


};

class child:public Father,public Mother{


};
int main(){
child c1;
c1.haircolor("ali","red");
c1.habit("sameer");
    
} // namespace std;
