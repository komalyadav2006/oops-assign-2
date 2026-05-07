#include<iostream>
using namespace std;

int main() {
    int choice;
    float amount, result;

    do {
        cout << "\n--- Currency Converter ---\n";
        cout << "1. INR to USD\n";
        cout << "2. USD to INR\n";
        cout << "3. INR to EUR\n";
        cout << "4. EUR to INR\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            cout << "Enter amount: ";
            cin >> amount;
        }

        switch(choice) {
            case 1:
                result = amount / 83;
                cout << "USD = " << result << endl;
                break;

            case 2:
                result = amount * 83;
                cout << "INR = " << result << endl;
                break;

            case 3:
                result = amount / 90;
                cout << "EUR = " << result << endl;
                break;

            case 4:
                result = amount * 90;
                cout << "INR = " << result << endl;
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}