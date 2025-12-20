#include <iostream>

using namespace std;

enum enFavuorite_color {red, green, yellow, white, black};

struct stinfo
{
    string first_name;
    string last_name;
    string phone;
    int age;
};

int main()
{
    stinfo Person1Info;
    enFavuorite_color favorite_color;

    Person1Info.first_name = "Mohamed";
    Person1Info.last_name = "Ragheb";
    Person1Info.age = 17;
    Person1Info.phone = "010445759597";

    favorite_color = enFavuorite_color::black;

    cout << "Phone : " << Person1Info.phone <<endl;
    cout << "My favorite color is " << favorite_color <<endl;

    return 0;
}
