#include <iostream>
using namespace std;

void my_sum_procedure ()
{
    int number1, number2;

    cout << "Please enter number1? \n";
    cin >> number1;

    cout << "Please enter number2? \n";
    cin >> number2;

    cout << "*******************\n";
    cout << number1 + number2 << endl;
}

int my_sum_function()
{
    int number1, number2;

    cout << "Please enter number1? \n";
    cin >> number1;

    cout << "Please enter number2? \n";
    cin >> number2;

    cout << "*******************\n";

    return number1 + number2;
}

int main()
{
    my_sum_procedure();

    cout << my_sum_function();
    return 0;
}
