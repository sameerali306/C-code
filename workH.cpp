#include<iostream>
using namespace std;

class laptop{
    public:
    string brand;
    float price;
    string model;
    int ram;
    int percentage;

    // public:
    // laptop(string b,float p,string m,int r ,int pr){
    //     brand=b;
    //     price=p;
    //     model=m;
    //     ram=r;
    //     percentage=pr;
    //     display();

    // }
    // void percentage(int per){
    //     if (per>0 && per<70)
    //     {
    //         cout<<"percentage aply successfully";
    //     }else{
    //         cout<<"percentage des not apply";
    //     }
        
    // }
    void display(){
        cout<<"the laptop brand is :"<<brand<<endl;
        cout<<"the laptop price  is :"<<price<<endl;
        cout<<"the laptop ram is :"<<ram<<endl;
        cout<<"the laptop model is :"<<model<<endl;
    }
    // void setPrice(float p){
    //     if (p>0)
    //     {
    //         price=p;
    //     } else{
    //         cout<<"invalide input"<<endl;
    //     }
        
    // }

    // float getPrice(){
    //     return price;
    // }

    ~laptop(){
        cout<<"memory realsed for brand:"<<brand<<endl;
    }
 };


int main(){
   laptop hp;
   hp.brand="hp";
   hp.price=2500;
   hp.model="hp";
   hp.ram=6;
   hp.display();
   


//    cout<<"price:"<<hp.getPrice()<<endl;

//    hp.setPrice(2500);
//    cout<<"Update price:"<<hp.getPrice()<<endl;

   return 0;
} // namespace std;
