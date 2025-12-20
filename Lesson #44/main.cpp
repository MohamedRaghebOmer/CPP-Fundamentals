#include <iostream>
using namespace std;

enum enColorChoice { Red, Blue, Yellow, White, Black,Green};

int main()
{
    cout << "What is your favorite color? \n";
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Yellow" << endl;
    cout << "(4) White" << endl;
    cout << "(5) Black" << endl;
    cout << "(6) Green" << endl;

    int C;

    enColorChoice Color;

    cin >> C;
    Color = (enColorChoice)C;

    if (color == enColorChoice::Red)
    {
        cout << "Your choice is Red";
    }

    return 0;
}
