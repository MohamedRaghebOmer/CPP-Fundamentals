#include <iostream>
using namespace std;

enum endepartment {IT, HR, Marketing,Sales};
enum enContactInformation {Whatsapp, telegram, phon, gmail, facebook};

struct stname
{
   string FirstName;
   string SecondName;
   string ThirdName;
};

struct stEmployeeID
{
    int EmployeeID;

    stname name;
};

struct stSalary
{
    double Salary;

    stEmployeeID employeeiD;
};

struct stAddress
{
    string country;
    string city;
    string villege;
    int StreetNo;

    stSalary salary;

    endepartment department;
    enContactInformation ContactInformation;
};

int main()
{
    stAddress address;


    address.salary.employeeiD.name.FirstName = "Mohamed";
    address.salary.employeeiD.name.SecondName = "Ragheb";
    address.salary.employeeiD.name.ThirdName = "Omer";
    address.salary.employeeiD.EmployeeID = 1001;
    address.salary.Salary = 10000;
    address.country = "Egypt";
    address.city = "Dammetta";
    address.villege = "Eltawfiai";
    address.StreetNo = 484;


    address.department = endepartment::HR;
    address.ContactInformation = enContactInformation::Whatsapp;

    cout << address.salary.employeeiD.name.ThirdName;

    return 0;
}
