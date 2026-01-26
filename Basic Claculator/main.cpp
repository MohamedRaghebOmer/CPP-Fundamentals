#include <iostream>

using namespace std;

int main()
{
// Get the user name
	cout << "Enter your name \n";
	string name;
	cin >> name ;

	//Welcome message
	cout << "Hello " << name ;

	 // Ask user to enter the numbers
	cout << "\n Write the first number: \n";

// Declare two float variables
	float num_1 , num_2;

// Get numbers from user
	cin >> num_1;
	cout << " Write the second number \n";
	cin >> num_2;

// Display results

 	cout << "________ the results ______\n\n";

	cout <<  num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;

	cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;

	cout << num_1 << " x " << num_2 << " = " << num_1 * num_2 << endl;

	cout << num_1 << " / " << num_2 << " = "   << num_1 / num_2 << endl;

	cout<< " \nThanks for using the calculator !";

    return 0;
}
