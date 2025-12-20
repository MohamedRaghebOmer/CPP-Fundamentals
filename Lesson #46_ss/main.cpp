#include <iostream>
using namespace std;

enum enMonthName { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

void ShowMonthNameMenu()
{
    cout << "************************" << endl;
    cout << "       Months Menu      " << endl;
    cout << "************************" << endl;
    cout << "1: January" << endl;
    cout << "2: February" << endl;
    cout << "3: March" << endl;
    cout << "4: April" << endl;
    cout << "5: May" << endl;
    cout << "6: June" << endl;
    cout << "7: July" << endl;
    cout << "8: August" << endl;
    cout << "9: September" << endl;
    cout << "10: October" << endl;
    cout << "11: November" << endl;
    cout << "12: December" << endl;
    cout << "************************" << endl;
    cout << "Please enter the number of month?" << endl;
}

enMonthName MonthName()
{
    int MoName;
    cin >> MoName;

    return (enMonthName)MoName;

}

string GetMonthName(enMonthName month)
{
    switch (month)
    {

    case enMonthName::January:
        return "January";

    case enMonthName::February:
        return "February";

    case enMonthName::March:
        return "March";

    case enMonthName::April:
        return "April";

    case enMonthName::May:
        return "May";

    case enMonthName::June:
        return "June";

    case enMonthName::July:
        return "July";

    case enMonthName::August:
        return "August";

    case enMonthName::September:
        return "September";

    case enMonthName::October:
        return "October";

    case enMonthName::November:
        return "November";

    case enMonthName::December:
        return "December";

    default:
        return "Invalid Month";
    }
}

int main()
{
    ShowMonthNameMenu();
    enMonthName monthname = MonthName();
    cout << "This month is: "  << GetMonthName(monthname);

    return 0;
}
