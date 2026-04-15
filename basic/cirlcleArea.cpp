#include<iostream>
using namespace std;
double CircleArea(double rad){
    return 3.14*rad*rad;
}
int main(){
int Rad1;
int Rad2;
double area;
cout<<"Enter a radius of circle 1 :";
cin>>Rad1;
cout<<"Enter a radius of circle 2 :";
cin>>Rad2;
area=CircleArea(Rad1)-CircleArea(Rad2);
cout<<area;
    
} // namespace std;
