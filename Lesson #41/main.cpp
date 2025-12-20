#include <iostream>

using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    unsigned short Age;
    string Phone;
};

void ReadInfo(stInfo &Info)
{
    cout << "What is your first name? \n";
    getline(cin, Info.FirstName);

    cout << "What is your last name? \n";
    getline(cin, Info.LastName);

    cout << "How old are you? \n";
    cin >> Info.Age;

    cout << "What is your phone number? \n";
    cin >> Info.Phone;
}

void PrintInfo(const stInfo &Info)
{
    cout << "\n=============Person info=============\n";
    cout << "First name: " << Info.FirstName << endl;
    cout << "Last name: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;
    cout << "=============Person info=============\n";
    cin.ignore();
}

int main()
{
    stInfo Person[3];

    ReadInfo(Person[0]);
    PrintInfo(Person[0]);

    ReadInfo(Person[1]);
    PrintInfo(Person[1]);

    ReadInfo(Person[2]);
    PrintInfo(Person[2]);

    return 0;
}
