#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");

    frank_account.set_balance(1000.0);

    if (frank_account.deposite(200.0)) {
        cout << "Deposite OK" << endl;
    }
    else {
        cout << "Deposite not allowed" << endl;
    }

    if (frank_account.withdraw(500.0)) {
        cout << "Withdrawal OK" << endl;
    }
    else {
        cout << "No sufficient funds" << endl;
    }

    if (frank_account.withdraw(1500.0)) {
        cout << "Withdrawal OK" << endl;
    }
    else {
        cout << "No sufficient funds" << endl;
    }

    return 0;
}

