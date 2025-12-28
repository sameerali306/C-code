#include <iostream>
using namespace std;

int main() {
    int pin = 125455;
    int pin2;
    int Totalbalance = 10000; // Move balance outside the loop
    
    do {
        cout << "Enter your PIN: ";
        cin >> pin2;
        
        if (pin == pin2) {
            int choice;
            
            do {
                cout << "\n1. Check balance\n";
                cout << "2. Withdraw amount\n";
                cout << "3. Deposit balance\n";
                cout << "4. Exit\n";
                cout << "Enter your choice: ";
                cin >> choice;

                switch(choice) {
                    case 1:
                        cout << "Your total amount is: " << Totalbalance << endl;
                        break;
                        
                    case 2:
                        int withdrawAmount;
                        cout << "Enter amount to withdraw: ";
                        cin >> withdrawAmount;
                        
                        if (withdrawAmount > Totalbalance) {
                            cout << "Insufficient funds!" << endl;
                        } else if (withdrawAmount <= 0) {
                            cout << "Invalid amount!" << endl;
                        } else {
                            Totalbalance -= withdrawAmount;
                            cout << "Withdrawn: " << withdrawAmount << endl;
                            cout << "Remaining balance: " << Totalbalance << endl;
                        }
                        break;
                        
                    case 3:
                        int depositAmount;
                        cout << "Enter amount to deposit: ";
                        cin >> depositAmount;
                        
                        if (depositAmount <= 0) {
                            cout << "Invalid amount!" << endl;
                        } else {
                            Totalbalance += depositAmount;
                            cout << "Deposited: " << depositAmount << endl;
                            cout << "New balance: " << Totalbalance << endl;
                        }
                        break;
                        
                    case 4:
                        cout << "Thank you for using ATM. Goodbye!" << endl;
                        break;
                        
                    default:
                        cout << "Invalid choice! Please try again." << endl;
                }
            } while (choice != 4);
            
            break; // Exit the PIN loop after transactions
            
        } else {
            cout << "Invalid PIN. Please try again.\n";
        }
    } while (true);
    
    return 0;
}