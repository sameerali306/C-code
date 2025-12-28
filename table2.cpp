#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number :";
    cin>>number;
    int total=0;
    int i=1;
    while (i<=number)
    {
        total =total+i;
        i++;
        cout<<total<<endl;
    }
    
    
} // namespace std;

