#include<iostream>
#include<string>
using namespace std;
int main(){
    string name; //wqe declare a string name
    name="sameer ali";//initilize it 
    string *myp=&name; ///we have a pointer myp and store the address of name in it not value address
    
     cout<<"name ="<<name<<endl; 
     cout<<"myp ="<<myp<<endl;

    string &name2=name;//here we create a reference  of a memory location of name
    name2="faria hussain \n"; //and chnage the value of that memory address from sameer to faria here the value of name variable also change to faria bcz the 
    
    cout<<"myp ="<<myp<<endl;
    cout<<"name ="<<name;
    cout<<"name2 ="<<name2;

   
    
}