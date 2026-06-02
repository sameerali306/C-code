#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void inputName(){
        cout<<"Enter person name :";
        cin>>name;
    }
};

class Department{
    protected:
    string deptName;
    public:
    void inputDept(){
        cout<<"enter department name :";
        cin>>deptName;
    }
};

class Teacher:public Person ,public Department{
    private:
    string subject;

    public:
    void inputSubject(){
        cout<<"Enter subject name :";
        cin>>subject;

    }

    void displayDetails(){
        cout<<"Name :"<<name<<endl;
        cout<<"Department :"<<deptName<<endl;
        cout<<"subject :"<<subject<<endl;

    }
};

int main(){
        Teacher t1;
        t1.inputName();
        t1.inputDept();
        t1.inputSubject();
        t1.displayDetails();
    
} // namespace std;
