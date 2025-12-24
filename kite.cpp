#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter a number of rows :";
    cin>>rows;
    int i=rows;
    while (i>0)
    {
        int j=i;
        while(j>0){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i--;
    }
    
    
    
} // namespace std;

