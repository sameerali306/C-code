#include<iostream>
using namespace std;
 class student{
    private:
    int marks;


public:
    void setMarks(int m){
        marks=m;
    }

    int getmarks(){
        return marks;
    }
 };
 int main(){
    student s1;
    s1.setMarks(200);
    cout<<s1.getmarks();
 }