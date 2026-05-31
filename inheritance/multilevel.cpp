#include<iostream>
using namespace std;

class Grandfather{
    public:
    string FamilyName;
    public:
    void FamilyTitle(string FamilyName){
        cout<<"the name of the family is :"<<FamilyName<<endl;
    }
};

class Father:public Grandfather{
    public:
    string SurName;
    public:
    void SureNamee(string SurName){
        cout<<"the surname is :"<<SurName<<endl;
    }
};

class child:public Father{
    public:
    string name;
    public:
    void detailed(string name){
        cout<<"the name is :"<<name<<endl;
    }
};

int main(){
    child c1;
    c1.detailed("ali");
    c1.SureNamee("khan");
    c1.FamilyTitle("kkk");

}