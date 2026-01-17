#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"enter your day number :";
    cin>>days;
    switch (days)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wensday";
    case 4:
        cout<<"Thrusday";
        break;       
    case 5:
        cout<<"friday";
        break; 
    case 6:
        cout<<"saturday";
        break; 
    case 7:
        cout<<"sunday";
        break;     
    default:
          cout<<"not a valid days";
        break;
    }
    
} // namespace std;
