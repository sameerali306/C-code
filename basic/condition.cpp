#include<iostream>
using namespace std;
int main(){
    int rating;
    cout<<"Enter your rating :";
    cin>>rating;
    if (rating<1 )
    {
        cout<<"please enter a number batween 1 and 5 \n";
    }
    else if (rating>5)
    {
        cout<<"please enter a valid rating batween 1 and 5 \n ";
    }
    else if (rating==1)
    {
        cout<<"you rate us very poor \n ";
    }
    else if (rating==2)
    {
        cout<<"you rate us poor but no problem\n ";
    }
    else if (rating==3)
    {
        cout<<"you rate us not as good  \n ";
    }
    else if (rating==4)
    {
        cout<<"you rate us not as very good as we are \n ";
    }
    else 
    {
        cout<<"you rate us very well excellent  ";
    }
    
    
} // namespace std;
