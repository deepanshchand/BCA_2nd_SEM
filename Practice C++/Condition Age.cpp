#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age : ";
    cin >> age;
    if (age <= 18)
    {
        cout << "Teenage";
    }
    else if (age >= 18 && age <= 50)
    {
        if (age >= 18 && age <= 45)
        {
            cout << "Young";
        }
        else
        {
            cout << "Mature";
        }
    }
    else
        cout << "Senior citizen";

    return 0;
}