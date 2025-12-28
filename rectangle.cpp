#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows :";
    cin>>rows;
    int i=0;
    while (i<rows)
    {
        int j=0;
        while (j<rows*2)
        {
            cout<<" * ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    
} // namespace std;
