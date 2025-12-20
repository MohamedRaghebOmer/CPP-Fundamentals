#include <iostream>

using namespace std;

void Swap(int &A, int &B)
{
    int temp;

    cout << "A : ";
        cin >> A;

    cout << "B : ";
        cin >> B;

    cout << "Before swap : " << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    swap(A, B);

    cout << "After swap : " << endl;
    cout << "A = " << A << endl;
    cout <<"B = " << B << endl;
}

int main()
{
    int A, B;

    Swap (A, B);

    cout << "After swap inside main : " << endl;
    cout << "A : " << A << endl;
    cout << "B : " << B << endl;


    return 0;
}

/*
    Program to swap numbers
*/
