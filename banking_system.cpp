#include <iostream>

using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 200;
    int choice = 0;
    do
    {
        cout << "****************************************************\n";
        cout << "**************available choices are *****************\n";
        cout << "1.Show Balance \n";
        cout << "2.deposit money \n";
        cout << "3.Withdraw money\n";
        cout << "4.Exit\n";
        cout << "********************************\n";
        cout << "Enter your choices: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "***THANKS FOR VISITING***\n";
            break;

        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
void showBalance(double balance)
{
    cout << "\nYour balance is: $ " << balance << '\n';
}
double deposit()
{
    double amount = 0;
    cout << "Enter your  amount to be Deposited: ";
    cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << "Thats not a valid amount\n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;
    if (amount < balance)
        return amount;
    else
    {
        cout << "Insufficiant  Balance:\n";
        return 0;
    }
}