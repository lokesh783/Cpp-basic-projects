#include <iostream>
using namespace std;

int main()
{
    int option;
    double balance = 220, limit = 20, deposit, withdraw;
    int select;
    do
    {

        cout << "        Menu        " << endl;
        cout << "  1)  Check Balance." << endl;
        cout << "  2)  Deposit.       " << endl;
        cout << "  3)  Withdraw.      " << endl;
        cout << "  4)  Exit.          " << endl;
        cout << "Select the option" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Your balance is: $" << balance << endl;
            break;
        case 2:
            cout << "Amout You want to deposit: $" << endl;
            cin >> deposit;
            balance += deposit;
            cout << "your balance is : $" << balance << endl;
            break;
        case 3:
            cout << "Amount you want to withdraw: $" << endl;
            cin >> withdraw;

            if (balance < withdraw)
            {
                cout << "your balance is less than amount you want to withdraw" << endl;
            }
            else if (balance - withdraw < limit)
            {
                cout << "After this withdraw Your balance will be less than prescribed limit.it can cause you a penalty " << endl
                     << "if you are okay with it press 1 otherwise 2" << endl;
                cin >> select;
                if (select == 1)
                {
                    balance -= withdraw;
                    cout << "your balance is : $" << balance << endl;
                    
                }else{
                  cout << "your balance is : $" << balance << endl;
                }break;
            }
            else
            {
                balance -= withdraw;
            }
            cout << "your balance is : $" << balance << endl;
            break;
        default:
            if (option != 4)
            {
                cout << "invalid option please try again later" << endl;
            }
            break;
        }

    } while (option != 4);
    system("pause");

    return 0;
}
