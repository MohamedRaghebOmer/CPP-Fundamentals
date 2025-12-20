#include <iostream>

using namespace std;

void ReadGrades(float Grade[3])
{
    cout << "Please enter grade1? \n";
    cin >> Grade[0];

    cout << "Please enter grade2? \n";
    cin >> Grade[1];

    cout << "Please enter grade3? \n";
    cin >> Grade[2];
}

float calculateAverageGrades(float Grade[3])
{
    return (Grade[0] + Grade[1] + Grade[2]) /3;

}

int main()
{
    float Grade[3];

    ReadGrades(Grade);
    cout << "The Average of grades is " << calculateAverageGrades(Grade);

    return 0;
}
