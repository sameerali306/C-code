#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int number=1; //declare a variable number and give value 1
    while (number<=20)
    {
        
        if(number==13){
            break; //stop print number when it reach 13
        }
        cout << number << " ";
        Sleep(1000);
        number++;

        
    }
    
}