#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    int number=10;//declare and give value to variable number 10
    do{
        if(number==5){
            number--; // move this above continue
            continue;
        }
        cout<<number<< " ";//display output
        Sleep(1000);//pause for 1 sec
        number--;//decrement number
    }while(number>0);
}