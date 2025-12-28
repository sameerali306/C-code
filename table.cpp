#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter you row :";
    cin>>row;
    int i=0;
    while (i<row)
    {
        int j=0;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
        

    }
    

} // namespace std;

