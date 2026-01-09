#include<iostream>
using namespace std;
int main(){
    int number;
    number=40;
    
    int *pointer;
    pointer=&number;//here the pointer store the address of the number and its value
    cout<<"the value of pointer is "<<pointer<<endl;
    int pointer2;
    pointer2=*pointer;//here we dereference the poinetr variable ti get its value
    cout<<"the value of pointer2 is "<<pointer2<<endl;
} // namespace std;
