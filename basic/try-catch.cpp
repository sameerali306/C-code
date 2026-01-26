#include<iostream>
using namespace std;
int main(){
    int call_api=1;
    try
    {
        cout<<"we are in the try catch block\n";
        cout<<"the block of if else\n";
        throw call_api;
        cout<<"we are running into an error";
    }
    catch(int x)
    {
        cout <<"we get the error message of interger\n";
    }catch(float x)
    {
        cout <<"we get the error message of float\n";
    }catch(...)
    {
        cout <<"something went wrong.....";
    }
    
}