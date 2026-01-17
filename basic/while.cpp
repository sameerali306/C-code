#include<iostream>
using namespace std;
int main(){
     int names[]={3,5,6,4,8,9};
     int i=0;
     while (i<6)
     {
        if (i==3)
        {
            i++;
            cout<<"the skip value is"<<names[i];
            continue;
        }
        
        
        cout<<names[i]<<endl;
        i++;
     }
     cout<<i;
     

    
} // namespace std;
