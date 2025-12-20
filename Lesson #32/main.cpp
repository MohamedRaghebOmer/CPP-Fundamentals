#include <iostream>
#include <string>

using namespace std;

void display_my_card_info()
{
    string name, age, city, country;

    cout << "**************************\n";
    cout << "Name : ";
    getline(cin, name);


    cout << "Age  : ";
    cin >> age;

    cout << "City  : ";
                            cin.ignore(1, '\n');
    getline(cin, city);

    cout << "Country : ";
    getline(cin, country);

    cout << "\n*************************\n\n";

}

void print_squre_stars()
{
    cout << "********\n";
    cout << "********\n";
    cout << "********\n\n";
}

void print_i_love_programing()
{
   cout << "I love programing! \n\n";
   cout << "I promise to be the best developer ever! \n\n";
   cout << "I know it will take some time to practice, but i will achieve my goal. \n\n ";
   cout << "Best regards.\n Mohamed Ragheb." <<endl;
}

int main()
{
    display_my_card_info();
    print_squre_stars();
    print_i_love_programing();
    return 0;
}
