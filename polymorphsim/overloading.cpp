#include<iostream>
using namespace std;
class Number{
    public:
    void show(){
        cout<<"the function has no parameter";

    }

    void show(int x){
        cout<<"integer :"<<x<<endl;

    }

    void show(double y){
        cout<<"double :"<<y<<endl;

    }

    void show(int x,double y){
        cout<<"integer :"<<x<<" double :"<<y<<endl;
    }
};

int main(){
    Number n;
    n.show();
    n.show(5);
    n.show(2.3);
    n.show(4,3.4);
} // namespace std;
