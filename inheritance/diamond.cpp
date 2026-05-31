#include<iostream>
using namespace std;

class GrandParent{
    public:
    string name;
    
    public:
    void Family(string name){
        cout<<"the name of the family is "<<name<<endl;
    }
};

class Father: virtual GrandParent{};
class Mother:virtual public GrandParent{};

class child:public Father,public Mother{};

int main(){
    child c1;
    c1.Family("kkk");
} // namespace std;

