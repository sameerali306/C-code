#include<iostream>
using namespace std;
class PhoneCall{
    public:
    void makeCall(string number){
        cout<<"calling :"<<number<<endl;
    }

    void Sms(string message){
        cout<<"message is send :"<<message<<endl;

    }

};

class Camera{
    public:
    void Takephoto(){
        cout<<"click ! photo is taking\n";
    }
    public:
    void Takevideo(){
        cout<<"Recording video...\n";

    }
};

class SmartPhone:public PhoneCall,public Camera{
    public:
    void installApp(string app){
        cout<<app<<" is install\n ";
    }

};

int main(){
    SmartPhone S1;
    S1.makeCall("03555976481");
    S1.Sms("hi..!");
    S1.Takephoto();
    S1.Takevideo();
    S1.installApp("whatapps");
    
} // namespace std
