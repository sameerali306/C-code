#include<iostream>
using namespace std;
int main(){
    int number;
    
    int Gussednumber=7;
    int gussedAttempt=1;
    int Totalgussed=10;
    while ( gussedAttempt<=Totalgussed)
    {
         cout<<"enter a number :";
            cin>>number;
        if (number==Gussednumber)
        {
           
            cout<<"congrates your guess is right...";
            break;
            // gussedAttempt=Totalgussed;
        }else{
            cout<<"your guess is wrong...Try again."<<endl;
            cout<<"Gussed attempt ="<<gussedAttempt<<endl;
            cout<<"GuessRemaining ="<<Totalgussed-gussedAttempt<<endl;

        }
        gussedAttempt++;
        
    }
    
    
    
    


} 
