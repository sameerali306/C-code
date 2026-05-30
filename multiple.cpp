#include<iostream>
using namespace std;
 class father{
    public:
    void skill1(){
        cout<<"driving"<<endl;
    };
 };
 class mother{
    public:
    void skill2(){
        cout<<"cooking"<<endl;
    };
 };
 class child:public father,public mother {
    
 };

 int main(){
    child c;
    c.skill1();
    c.skill2();
 }