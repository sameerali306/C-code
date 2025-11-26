#include<iostream>
using namespace std;
int main(){
   int marks;
   cout<<"Enter your marks :";
   cin>>marks;
   if (marks>=80)
   {
    cout<<"You are passed in grade A+";
   }else if (marks>=70)
   {
     cout<<"You are passed in grade A";
   }else if (marks>=60)
   {
    cout<<"You are passed in grade B";
   }else if (marks>=50)
   {
    cout<<"You are passed in grade C";
   } else if (marks>=40)
   {
    cout<<"You are passed in grade D";
   }else{
    cout<<"fail";
   }
}