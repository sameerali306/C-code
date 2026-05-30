#include<iostream>
using namespace std;
int main(){
    int *p;
    int x=10;
    p=&x;
    cout<<"the value which is store in pointer :"<<p<<endl;
    cout<<"the actual value :"<<*p<<endl;
    cout<<"the actual value :"<<&x;

}