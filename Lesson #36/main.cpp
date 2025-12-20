#include <iostream>

using namespace std;

int x = 100;

void procedure ()
{
    int x = 100;
    cout << x;
}

int main()
{
    procedure();
    int x = 10;
    x--;
    cout << "\n" << ::x;
    return 0;
}
