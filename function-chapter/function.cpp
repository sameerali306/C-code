#include<iostream>
using namespace std;

int sum(int a,int b); //declare a function
//above this a and b are formal which get value from actual parameter
int main(){
    int num1;
    int num2;
    //this are actual parameter num1 and num2

    cout<<"Enter first number : ";
    cin>>num1;
     cout<<"Enter second number : ";
    cin>>num2;

    cout<<"The sum of given number is :"<<sum(num1,num2);//this throw value which is store in num2 and num2 to a and b of function
}

int sum(int a, int b){ //function defination
    int c=a+b;
    return c;
}