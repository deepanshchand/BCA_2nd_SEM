#include <iostream>
using namespace std;

class ATM
{
    private:
    int balance = 10000;

public:
    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdraw Successful\n";
            cout << "Remaining Balance " << balance;
        }
        else
        {

            cout << "Insufficiant Balance ";
        }
    }
};
int main()
{
    ATM user;
    user.withdraw(2000);

    return 0;
}