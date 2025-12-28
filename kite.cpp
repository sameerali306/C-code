#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows :";
    cin>>rows;
    int i=0;
    while (i<=rows)
    {
        int j=0;
        while (j<i)
        {
            if (j>=2)
            {
              cout<<"  %" ; 
              j++;
            }else{
                cout<<" *";
                j++;

            }
            
        
        }
       
        cout<<endl;
            i++;    
        
    }
    

}

