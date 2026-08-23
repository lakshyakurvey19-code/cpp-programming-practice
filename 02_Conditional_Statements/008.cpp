#include <iostream>
using namespace std;

int main()
{
    int day, month, year, days;

    cout << "Enter day, month and year: ";
    cin >> day >> month >> year;

    if (month < 1 || month > 12)
    {
        cout << "Invalid Date";
    }
    else
    {
        if (month == 2)
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                days = 29;
            else
                days = 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            days = 30;
        }
        else
        {
            days = 31;
        }

        if (day >= 1 && day <= days)
            cout << "Valid Date";
        else
            cout << "Invalid Date";
    }

    return 0;
}