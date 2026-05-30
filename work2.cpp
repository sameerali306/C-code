#include<iostream>
	using namespace std;
	
	class laptop{
	    public:
	    string brand;
	    float price;
	    void display(){
	        cout<<"Brand="<<brand<<endl;
	        cout<<"Price="<<price<<endl;
	    }
	};
	
	int main(){
	    laptop hp;
	    laptop dell;
	
	    hp.brand="hp";
	    hp.price=8000;
	
	    dell.brand="dell";
	    dell.price=9000;
	
	    hp.display();
	    dell.display();
	} // namespace std;