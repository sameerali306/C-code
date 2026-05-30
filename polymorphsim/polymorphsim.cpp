#include<iostream>
using namespace std;

class Print{
    public:
    void show(int x){
        cout<<"integer :"<<x<<endl;
    };
    void show(double y){
        cout<<"double :"<<y<<endl;
    };
};
int main(){
    Print P;
    P.show(3);
    
}