#include <iostream>
using namespace std;

struct stIdCard
{
    string FirstName;
    string LastName;
    int age;
    string PhoneNumber;
};

struct stAddress
{
    string Country;
    string City;
    string Village;
    string StreetNo;
};

struct stBirthData
{
    string FatherName;
    string MotherName;
    string NationalHistory;
};

void GetIdCard(stIdCard &id)
{
    cout << "Please enter your first name?\n";
    cin >> id.FirstName;

    cout << "Please enter your last name?\n";
    cin >> id.LastName;

    cout << "How old are you?\n";
    cin >> id.age;

    cout << "Please enter your Phone number?\n";
    cin >> id.PhoneNumber;

    cout << "______________________________\n";
}

void GetUserAddress(stAddress &Address)
{
    cout << "Where are you from?\n";
    cin >> Address.Country;

    cout << "Please enter your city name?\n";
    cin >> Address.City;

    cout << "Please enter your Village name?\n";
    cin >> Address.Village;

    cout << "Please enter your StreetNo?\n";
    cin >> Address.StreetNo;

    cout << "______________________________\n";
}

void GetBirthData(stBirthData &Birth)
{
    cout << "What's your father's name?\n";
    cin >> Birth.FatherName;

    cout << "What's your mother's name?\n";
    cin >> Birth.MotherName;

    cout << "What's your National History?\n";
    cin >> Birth.NationalHistory;

    cout << "______________________________\n";
}

void PrintPersonInfo(stBirthData &Person)
{
    cout << "\n========== User Info ==========\n";
    cout << "First Name     : " << Person.Address.IdCard.FirstName << endl;
    cout << "Last Name      : " << Person.Address.IdCard.LastName << endl;
    cout << "Age            : " << Person.Address.IdCard.age << endl;
    cout << "Phone Number   : " << Person.Address.IdCard.PhoneNumber << endl;

    cout << "Country        : " << Person.Address.Country << endl;
    cout << "City           : " << Person.Address.City << endl;
    cout << "Village        : " << Person.Address.Village << endl;
    cout << "Street No      : " << Person.Address.StreetNo << endl;

    cout << "Father's Name  : " << Person.FatherName << endl;
    cout << "Mother's Name  : " << Person.MotherName << endl;
    cout << "National History: " << Person.NationalHistory << endl;
    cout << "===============================\n";
}

int main()
{
    stBirthData Person1;

    GetIdCard(Person1.Address.IdCard);
    GetUserAddress(Person1.Address);
    GetBirthData(Person1);

    PrintPersonInfo(Person1);

    return 0;
}
