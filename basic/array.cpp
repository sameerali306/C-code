#include<iostream>
#include<string>
using namespace std;
int main(){
    string names[4]={"sameer ali","faria hussain","faris ali","umair ali"}; //here ie the array and has 4 element in it
    string *myp=names;//we set a pointer name myp and set its value names so it take the fist inde address any any change can make in the first index
    cout<<"my first element is " <<names[0]<<endl;
    cout<<"this is the address of the first element of array " <<myp<<endl;
    cout<<"my second element is " <<names[1]<<endl;//we access the fist index of names array
    cout<<"this is the address of the second element of array" <<myp+1;

    *myp="fariya hussaini";
    *(myp+1)="sameer ali";
    cout<<"my first element   after changing is " <<names[0]<<endl;
    cout<<"this is the address of the first element of array " <<myp<<endl;
    cout<<"my second element after changing is " <<names[1]<<endl;
    cout<<"this is the address of the second element of array" <<myp+1;


}
