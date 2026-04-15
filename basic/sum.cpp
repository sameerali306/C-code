#include<iostream>
using namespace std;
int main(){
   int age[4]={10,20,29,10};
   int sum=0;
   int i=0;
   for ( i = 0; i < 4; i++)
   {
    sum =sum+age[i];
   }
   cout<<sum;
   
} // namespace std;
