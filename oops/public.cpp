#include<iostream>
using namespace std;
class student{
        public:
        string name;
        int marks;

        void display(){
            cout<<"student name is :"<<name<<endl;
            cout<<"student marks is :"<<marks<<endl;
        }
    };
int main(){
    student s1;//create an object

    s1.name="sameer ali";
    s1.marks=90;

    s1.display();//calling method
    
} // namespace std;
