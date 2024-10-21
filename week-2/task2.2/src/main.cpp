#include "BankAccout.hpp"


int main()
{
    BankAccount One;
    One.setBalance(100);
    One.deposit(200);
    One.withdraw(300);
    cout << One.getBalance() << endl;
}

