#include<iostream>
using namespace std;

char stars();

int main(){
	stars();
	stars();
	stars();
}

char stars(){
    int rows;
    cout<<"Enter a number of Rows : ";
    cin>>rows;
    int i;
    for(i=1;i<=rows;i++){
    	int j;
    	for(j=1;j<=i;j++){
    		cout<<"*";
		}
		cout << endl;
	
	}
}
