#include <iostream>
using namespace std;

enum Gender {male, femal};
enum MaritalStatus {married, single};
enum my_favorite_color {Red, Green, Blue, Yellow, white, blake, silver};

int main()
{
    Gender MyGender;
    MaritalStatus MyMarried;
    my_favorite_color MyFaVoriteColor;

    MyGender = Gender::male;
    MyMarried = MaritalStatus::single;
    MyFaVoriteColor = my_favorite_color::blake;

    cout << "My Gender is " << MyGender << endl;
    cout << "My status is " << MyMarried << endl;
    cout << "My favorite color is " << MyFaVoriteColor << endl;
    return 0;
}
