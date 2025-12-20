#include <iostream>
using namespace std;

struct profile
{
    string name;
    int age;
    string city;

};

int main()
{
    profile data1, data2;

    data1.name = "Mohamed";
    data1.age = 17;
    data1.city = "Dammeta";

    data2.name = "Ragheb";
    data2.age = 17;
    data2.city = "Eltawfia";

    cout << data1.name << " " << data1.age << " " << data1.city << endl;
    cout << data2.name << " " << data2.age << " " << data2.city << endl;

    return 0;
}
