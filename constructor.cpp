#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int marks;
    int rollNumber;

    student (string nam){
        name=nam;
    }
    student (string nam,int m){
        name=nam;
        marks=m;
    }

    student(string nam,int m,int R){
        name=nam;
        marks=m;
        rollNumber=R;

    }

    void display(){
        cout<<"the name of student is :"<<name<<endl;
        cout<<"the marks of "<<name<<" is :"<<marks<<endl;
        cout<<"the rollNumber of "<<name<<" is :"<<rollNumber<<endl;
    }

};

int main(){
    student s1("sameer ali");
    student s2("shaukat aziz",80,12);
    student s3("shoaib khan");

    s2.display();
} // namespace std;
