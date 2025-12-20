#include <iostream>
#include <string>

using namespace std;

int main()
{
    string string1, string2, string3;

    cout << "Please enter string : \n";
    getline(cin, string1);

    cout << "\nPlease enter string2 : \n";
    getline(cin, string2);

    cout << "\nPlease enter string3 : \n";
    getline(cin, string3);

    cout << "***************************\n";
    cout << "The length of string1 is " << string1.length() <<endl;
    cout << "Characters at 0,2,3,7 are ";
    cout << string1[0] << ", " << string1[2] << ", " << string1[3] << ", " << string1[7] <<endl;
    cout << "Cantenating string2 and string3 = " << string2 + string3 <<endl;

    int Result = stoi(string2) + stoi(string3);
    cout << string2 << " * " << string3 << " = " << Result<< endl;
    return 0;
}
