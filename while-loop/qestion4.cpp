#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter 10 integer number :";
    
    int count=1;
    for ( count = 1; count<=10; count++)
    {
        
        cin>>number;
        if(number%2!=0){
            continue;
        }
        cout<<"Even Number : "<<number<<endl;
        
    }
    cout<<"Your attempt are finished";
}