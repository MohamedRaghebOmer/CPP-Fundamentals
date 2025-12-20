#include <iostream>

using namespace std;

int main()
{
    int N, SumEven = 0, SumOdd = 0;

    cout << "Please inter your number: ";
    cin >> N;

    for (int i = 1; i <= N ; i++)
    {

        if (i % 2 == 0) // if the number is Even
        {
            cout << i << " (Even)" << endl;
            SumEven += i;
        }
        else // Here the number is Odd
        {
            SumOdd += i;
            cout << i << " (Odd)" << endl;
        }

    }

    cout << "\nTotal even numbers = " << SumEven << endl;
    cout << "Total odd numbers = " << SumOdd << endl;

    return 0;
}
