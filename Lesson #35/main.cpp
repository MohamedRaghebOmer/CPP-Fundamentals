#include <iostream>
#include <string>
using namespace std;

int MySumFunction(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    cout << MySumFunction(10, 20) <<endl; // (output = 30)

    int num1, num2;
    cin >> num1;
    cin >> num2;

    cout << MySumFunction(num1, num2); //output : num1 + num2
    return 0;
}
