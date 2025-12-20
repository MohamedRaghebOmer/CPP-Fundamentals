#include <iostream>

using namespace std;

int main()
{
cout << "Whats your name? \n";
    string name;
    cin >> name;
cout<<"Name: " <<name << endl;


cout << "How old are you? \n";
    short age;
    cin >> age;
cout << "Age: " <<age <<endl;


cout << "Whats the name of you city? \n";
    string city;
    cin >> city;
cout << "City : " <<city << endl;


cout << "Where are you from? \n";
    string country;
    cin >>country;
cout << "Country: " <<country << endl;


cout << "How much your salary in one month? \n";
    float monthly_salary;
    cin >> monthly_salary;
cout << "Monthly salary: " << monthly_salary <<endl ;
cout << "Yearly salary: " << monthly_salary*12 <<endl;


cout << "Whats your gender?\n ";
    string gender;
    cin >> gender;
cout << "Gender: " <<gender << endl;

cout << " Are you married?\n";
    string married;
    cin >> married;

cout << "Married: " <<married <<endl;


cout << "_______________________________________\n\n";

cout << "Write the first number\n";
    float first_number;
    cin >> first_number;

cout << "Write the second number \n";
    float second_number ;
    cin >> second_number ;

cout << "Write the third number \n";
    float third_number;
    cin >> third_number;

cout << first_number <<"+"<< second_number <<"+"<<third_number <<"=";
cout << first_number + second_number + third_number <<endl;
// output: x + y + z = total


cout <<"_______________________________________\n\n" ;


short your_old_after_five_years_old = age + 5;

    cout << "After 5 yeats old you will be "<< your_old_after_five_years_old<< " years old \n";

    return 0;
}
