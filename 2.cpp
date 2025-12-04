#include<iostream>
using namespace std;
int main(){
    int number;
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
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
            if (Totalgussed-gussedAttempt==0)
            {
               cout<<"You have no attemp left"<<endl;
               cout<<"The guessed number is ="<<Gussednumber;
            }
            

        }
        gussedAttempt++;
        
    }
    
    
    
    


} 
