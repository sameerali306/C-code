#include<iostream>
using namespace std;

class Tracker{
    public:
    Tracker(){
        cout<<"object create"<<endl;
    }
    ~Tracker(){
        cout<<"object destory"<<endl;
    }
};
int main(){
    cout<<"start"<<endl;
    Tracker obj1;//instance A
    Tracker* obj2=new Tracker();//instance B

    delete obj2;
    cout<<"end"<<endl;
    return 0;

    
} 
