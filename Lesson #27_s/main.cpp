#include <iostream>
using namespace std;

struct information
{
    string name;
    int age;
    string city;
    string country;
    float monthly_salary;
    float yearly_salary;
    string gander;
    string married ;

};

int main()
{
  information f1;
  f1.name = "mohamed";
  f1.age = 17;
  f1.city = "Damitta";
  f1.country = "Egypt";
  f1.gander = "Male";
  f1.married = ;

  cout << "Married : " << f1.married;

    return 0;
}
