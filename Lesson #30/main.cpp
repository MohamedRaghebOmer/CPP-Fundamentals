#include <iostream>
#include <string>

using namespace std;

int main()
{
// declare the variables : converting from
    string st1 = "43.22";
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;

// converting operations from string to : (double, float, int)
    double num_double = stod(st1);
    float num_float = stof(st1);
    int num_int = stoi(st1);

// converting operations from (double, float, int) to : string

    string num_string1 = to_string(N1);
    string num_string2 = to_string(N2);
    string num_string3 = to_string(N3);

// Results
cout << num_double << " " << num_float << " " << num_int << endl;
cout << num_string1 << " " << num_string2 << " " << num_string3 << endl;

    return 0;
}
