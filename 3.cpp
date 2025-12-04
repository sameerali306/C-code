#include<iostream>
using namespace std;
int main(){
    double number1,number2, Result;
    char oper;
    cout << "=== Simple C++ Calculator ===\n";
    cout<<"Enter a number1 :";
    cin>>number1;
    cout<<"Enter operator (+,-,/,*): ";
    cin>>oper;

     cout<<"Enter a number2 :";
    cin>>number2;

    if (oper=='+')
    {
        Result=number1+number2;
        cout<<"Result ="<<Result<<endl;
        // break;
    }else if (oper=='-')
    {
        Result=number1-number2;
        cout<<"Result ="<<Result<<endl;
    }else if (oper=='*')
    {
        Result=number1*number2;
        cout<<"Result ="<<Result<<endl;
    }else if (oper=='/')
    {
        if (number2==0)
        {
            cout << "Error: Division by zero is not allowed.\n";
                return 1; // Exit with an error code
        }else{
            Result=number1/number2;
            cout<<"Result ="<<Result<<endl;
        }
        return 0;
        
    }
    
    


    

}