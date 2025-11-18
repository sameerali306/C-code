#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter 10 integer numbers:" << endl;

    for (int count = 1; count <= 10; count++) {
        cin >> number;
        if (number % 2 != 0) {
            continue;  // skip odd numbers
        }
        cout << "Even Number: " << number << endl;
    }
    cout << "Your attempts are finished" << endl;
    return 0;
}
