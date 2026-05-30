#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int rollNumber;

    student( string nam,int R){
        name=nam;
        rollNumber=R;
        display();
    }
    void setName(){

    }

    void display(){
        cout<<name <<"|"<<rollNumber<<endl;
    }

};

int main(){
    student s1;


} // namespace std;

