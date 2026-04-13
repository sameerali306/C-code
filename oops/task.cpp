#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int Rollnumber;
    float gpa;

    void display(){
        cout<<"student name is ="<<name<<endl;
        cout<<"student rollNumber is ="<<Rollnumber<<endl;
        cout<<"student gpa is ="<<gpa<<endl;
    }
};
int main(){
    student s1;
    s1.name="sameer ali";
    s1.Rollnumber=23;
    s1.gpa=2;
    s1.display();
} // namespace std;
