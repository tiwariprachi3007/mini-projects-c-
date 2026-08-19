#include <iostream>
#include <string>

using namespace std;

class Bank
{
public:

    int accountNumber;
    string name;
    int pin;
    int balance;

    void createAccount()
    {
        cout << "\nEnter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter PIN: ";
        cin >> pin;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!";
    }

    void displayAccount()
    {
        cout << "\n\n========================";
        cout << "\n     ACCOUNT DETAILS";
        cout << "\n========================";

        cout << "\nAccount Number: " << accountNumber;
        cout << "\nName: " << name;
        cout << "\nBalance: Rs. " << balance;
    }

    void deposit()
    {
        int amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance = balance + amount;

            cout << "\nAmount Deposited Successfully!";
            cout << "\nNew Balance: Rs. " << balance;
        }
        else
        {
            cout << "\nInvalid Amount!";
        }
    }

    void withdraw()
    {
        int amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "\nInvalid Amount!";
        }
        else if (amount > balance)
        {
            cout << "\nInsufficient Balance!";
        }
        else
        {
            balance = balance - amount;

            cout << "\nAmount Withdrawn Successfully!";
            cout << "\nRemaining Balance: Rs. " << balance;
        }
    }

    void checkBalance()
    {
        cout << "\nYour Balance is: Rs. " << balance;
    }

    void changePin()
    {
        int oldPin;
        int newPin;

        cout << "\nEnter Old PIN: ";
        cin >> oldPin;

        if (oldPin == pin)
        {
            cout << "Enter New PIN: ";
            cin >> newPin;

            pin = newPin;

            cout << "\nPIN Changed Successfully!";
        }
        else
        {
            cout << "\nWrong PIN!";
        }
    }

    void menu()
    {
        int choice;

        do
        {
            cout << "\n\n========================";
            cout << "\n       BANK MENU";
            cout << "\n========================";

            cout << "\n1. Display Account";
            cout << "\n2. Deposit Money";
            cout << "\n3. Withdraw Money";
            cout << "\n4. Check Balance";
            cout << "\n5. Change PIN";
            cout << "\n6. Exit";

            cout << "\n\nEnter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    displayAccount();
                    break;

                case 2:
                    deposit();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    checkBalance();
                    break;

                case 5:
                    changePin();
                    break;

                case 6:
                    cout << "\nThank you for using the Bank System!";
                    break;

                default:
                    cout << "\nInvalid Choice!";
            }

        } while (choice != 6);
    }
};


int main()
{
    Bank user;

    cout << "========================";
    cout << "\n    BANK MANAGEMENT";
    cout << "\n========================";

    user.createAccount();

    user.menu();

    return 0;
}