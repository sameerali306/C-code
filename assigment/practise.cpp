#include<iostream> 
using namespace std; 
 
class Person{ 
    protected: 
       string name; 
 
    public: 
   void inputName(){ 
    cout<<"Enter person name:"; 
    cin>>name; 
     
   }; 
 
}; 
 
class Employee{ 
    protected: 
    int employeeId; 
 
    public: 
    void inputID(){ 
        cout<<"enter employeeId:"; 
        cin>>employeeId; 
    } 
 
};  
 
class Teacher:public Employee,public Person{ 
    private: 
    string subject; 
 
    public: 
    void inputSubject() { 
        cout<<"Enter subject name:"; 
        cin>>subject; 
    } 
 
     
    public: 
    void displayDetails(){ 
        cout<<"the detailed of the given staff is "<<endl; 
        cout<<"the name of the teacher is :"<<name<<endl; 
        cout<<"the id is :"<<employeeId<<endl; 
        cout<<"the name of the subject is :"<<subject<<endl; 
    } 
}; 
 
int main(){ 
    Teacher T1; 
    T1.inputName(); 
    T1.inputID(); 
    T1.inputSubject(); 
 
    T1.displayDetails(); 
 
     
}