#include<iostream>
using namespace std;
class student{
    public:
    string name;

    student(){
        name="ali";
        cout<<"your constructor is called :";
    }
};
int main(){
student s1;
cout<<s1.name;
}








