#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"enter you name :\n";
    getline(cin,name); //this line read and add our name with space 
    // cin>>name;//this only add the first and ignore all beyond it
    cout<<"hey "<<name<<" wellcome \n" ;
}