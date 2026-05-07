#include<iostream>
using namespace std;

class Bank {
    int accNo;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amt;
        cout << "Enter amount to deposit: ";
        cin >> amt;
        balance += amt;
        cout << "Amount Deposited\n";
    }

    void withdraw() {
        float amt;
        cout << "Enter amount to withdraw: ";
        cin >> amt;
        if(amt > balance) {
            cout << "Insufficient Balance\n";
        } else {
            balance -= amt;
            cout << "Amount Withdrawn\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    int getAccNo() {
        return accNo;
    }
};

int main() {
    Bank b[100];
    int n = 0, choice, acc, i;
    char found;

    do {
        cout << "\n--- Bank Management System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                b[n].createAccount();
                n++;
                break;

            case 2:
                cout << "Enter Account Number: ";
                cin >> acc;
                found = 'n';
                for(i = 0; i < n; i++) {
                    if(b[i].getAccNo() == acc) {
                        b[i].deposit();
                        found = 'y';
                        break;
                    }
                }
                if(found == 'n')
                    cout << "Account not found\n";
                break;

            case 3:
                cout << "Enter Account Number: ";
                cin >> acc;
                found = 'n';
                for(i = 0; i < n; i++) {
                    if(b[i].getAccNo() == acc) {
                        b[i].withdraw();
                        found = 'y';
                        break;
                    }
                }
                if(found == 'n')
                    cout << "Account not found\n";
                break;

            case 4:
                cout << "Enter Account Number: ";
                cin >> acc;
                found = 'n';
                for(i = 0; i < n; i++) {
                    if(b[i].getAccNo() == acc) {
                        b[i].display();
                        found = 'y';
                        break;
                    }
                }
                if(found == 'n')
                    cout << "Account not found\n";
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}