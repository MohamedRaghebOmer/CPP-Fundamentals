#include <iostream>
using namespace std;


enum enWeekDay { Sat = 1, Sun = 2, Mon = 3, Thue = 4, Wed = 5, Thu = 6, Fri = 7};



void ShowWeekDayMenu()
{
    cout << "************************" << endl;
    cout << "       Week Days        " << endl;
    cout << "************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "************************" << endl;
    cout << "Please enter the number of day?" << endl;
}

enWeekDay ReadWeekDay()
{
    int wd;
    cin >> wd;
    return (enWeekDay)wd;

}

string GetWeekDayName(enWeekDay WeekDay)
{

switch (WeekDay)

    {

    case enWeekDay::Sat:
        return "Saturday";
        break;

    case enWeekDay::Sun:
        return "Sunday";
        break;

    case enWeekDay::Mon:
        return "Monday";
        break;

    case enWeekDay::Thue:
        return "Tuesday";
        break;

    case enWeekDay::Wed:
        return "Wednesday";
        break;

    case enWeekDay::Thu:
        return "Thursday";
        break;

    case enWeekDay::Fri:
        return "Friday";
        break;

    default:
        return "Not a week day!\n";

    }

}

int main()
{
    ShowWeekDayMenu();

    cout << "Today is: " << GetWeekDayName(ReadWeekDay());
    return 0;
}
