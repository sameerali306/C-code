#include<iostream> 
using namespace std; 
class Shape{ 
protected: 
double dimension; 
public: 
void setdimension(double d){ 
dimension=d; 
} 
virtual void calculateArea(){ 
cout<<"the dimension of base class"; 
} 
}; 
class Square:public Shape{ 
    void calculateArea(){ 
        cout<<"the area of the square is :"<<dimension*dimension<<endl; 
    } 
}; 
 
class Circle:public Shape{ 
    void calculateArea(){ 
        cout<<"the area of the cicle is:"<<3.14*dimension*dimension<<endl; 
    } 
}; 
int main(){ 
    Shape* S1; 
    Square S; 
    S.setdimension(3.9); 
    S1=&S; 
    S1->calculateArea(); 
 
    //the area if the square is 
    // Shape* C1; 
    Circle C; 
    C.setdimension(2.9); 
    S1=&C; 
    S1->calculateArea(); 
     
}  
 