#include<iostream>
using namespace std;
class building{
    private:
    string color;
    int room;
    int length;
    int width;

    public:
    void setbuilding(string c,int r,int l,int w){
        color=c;
        room=r;
        length=l;
        width=w;
    }


    int getdisplay(){
        cout<<"the color of building is :"<<color<<endl;
        cout<<"Number of the rooms in the building is :"<<room<<endl;
        cout<<"the length of the building is :"<<length<<" while the width is :"<<width<<endl;
    }


};
int main(){
building b1;
b1.setbuilding("yellow",6,6,6);
b1.getdisplay();
    
} // namespace std;
