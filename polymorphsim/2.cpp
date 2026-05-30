#include<iostream>
using namespace std;

class Print{
    public:
    void show(int x){
        cout<<"integer :"<<x;
    }
    void show(int y,int z){
        cout<<"integer :"<<z;
    }
    

};

int main(){
    Print P1;
    P1.show(3,4);
    
} 
