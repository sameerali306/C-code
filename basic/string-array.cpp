#include<iostream>
using namespace std;
int main(){
    char my_string []="umair"; //if we define the string in this ways the compiler automatically put a zero in the last
    char my_string2 []={'s','a','m','i','r',0};//in this kind of stntax we hhave to put a 0 in ths last a

    // cout<<"my_string is :"<<my_string<<endl;

    for (int i = 0; i < my_string[i] !=0; i++)
    {
    //    cout<<"char are :"<<my_string[i]<<endl;
    }
    // cout<<"let do for second element : "<<endl;
    //  cout<<"my_string is :"<<my_string2<<endl;

    for (int i = 0; i < my_string2[i] !=0; i++)
    {
    //    cout<<"char are :"<<my_string2[i]<<endl;
    }
    
    for (char *i = my_string2 ; *i !=0; *i++)
    {
        cout<<"the value of pointer is :"<<*i<<endl;
    }
    

    
} // namespace std;
