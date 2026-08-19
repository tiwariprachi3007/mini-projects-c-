#include <iostream>
#include <string>

using namespace std;

class Account
{
public:

    int accountNumber;
    string name;
    int pin;
    int balance;

    void login()
    {
        int p;

        cout << "Enter PIN: ";
        cin >> p;

        if (p == pin)
        {
            cout << "\nLogin Successful!\n";
            menu();
        }
        else
        {
            cout << "\nWrong PIN!\n";
        }
    }

    void checkBalance()
    {
        cout << "\nYour Balance is: Rs. " << balance << endl;
    }

    void deposit()
    {
        int amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "\nAmount Deposited Successfully!";
        cout << "\nYour Balance is: Rs. " << balance << endl;
    }

    void withdraw()
    {
        int amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;

            cout << "\nPlease collect your cash.";
            cout << "\nYour Balance is: Rs. " << balance << endl;
        }
        else
        {
            cout << "\nInsufficient Balance!";
        }
    }

    void menu()
    {
        int choice;

        do
        {
            cout << "\n\n======================";
            cout << "\n       ATM MENU";
            cout << "\n======================";

            cout << "\n1. Check Balance";
            cout << "\n2. Deposit";
            cout << "\n3. Withdraw";
            cout << "\n4. Exit";

            cout << "\n\nEnter your choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    checkBalance();
                    break;

                case 2:
                    deposit();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    cout << "\nThank you for using ATM!";
                    break;

                default:
                    cout << "\nInvalid Choice!";
            }

        } while (choice != 4);
    }
};


int main()
{
    Account user;

    user.accountNumber = 101;
    user.name = "mamta";
    user.pin = 1234;
    user.balance = 10000;

    int accountNumber;

    cout << "======================";
    cout << "\n      ATM SYSTEM";
    cout << "\n======================";

    cout << "\nEnter Account Number: ";
    cin >> accountNumber;

    if (accountNumber == user.accountNumber)
    {
        user.login();
    }
    else
    {
        cout << "\nAccount Not Found!";
    }

    return 0;
}