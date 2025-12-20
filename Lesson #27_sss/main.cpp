#include <iostream>
using namespace std;

struct adress
{
    string home;
    string street;
    string villige;
};

struct data
{
    string name;
    int age;
    string city;
    string country;
    int monthly_salary;
    int yearly_salary;
    string job;
    adress adress1 ;
};


int main()
{
    data d1 ,d2;

    d1.name = "Mohamed Ragheb";
    d1.age = 17;
    d1.job = "Student";

    d2.city = "Dametta";
    d2.country = "Egypt";
    d2.monthly_salary = 10000;
    d2.yearly_salary = d2.monthly_salary * 12;
    d2.adress1.home = "home1";

    cout << d1.name << " " << d1.age << " " << d1.job << endl;
    cout << d2.city << " " << d2.country << " " << d2.monthly_salary <<  " " << d2.yearly_salary << endl;
    cout << d2.adress1.home;
    return 0;
}
