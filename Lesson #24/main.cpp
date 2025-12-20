#include <iostream>

using namespace std;

int main()
{
    int A ,B ;
    cout << "Please enter the first number A \n";
    cin >> A;
    cout << "Please enter the second number B \n";
    cin >> B;
    cout << "\n_________________________\n";

    // the reslut
    cout << (A == B) << endl;
    cout << (A != B) << endl;
    cout << (A > B) << endl;
    cout << (A < B) << endl;
    cout << (A >= B) << endl;
    cout << (A <= B) << endl;

    return 0;
}
