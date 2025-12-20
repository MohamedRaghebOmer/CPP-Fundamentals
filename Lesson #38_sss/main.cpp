#include <iostream>

using namespace std;

struct stFullName
{
    string FirstName;
    string LastName;
    int age;
};

struct stMarks
{
    int EnglishMark;
    int ChemistryMark;
    int PhysicsMark;
    int BiologyMark;
    float Total_Mark;

};

void Get_Data(stFullName &Info)
{
    cout << "What is your first name? \n";
    cin >> Info.FirstName;

    cout << "What is your last name\n";
    cin >> Info.LastName;

    cout << "How old are you? \n";
    cin >> Info.age;
}

void Get_Marks (stMarks &mark)
{
    cout << "\n**************************\n";

    cout << "What is your English Mark ? \n";
    cin >> mark.EnglishMark;

    cout << "What is your Chemistry Mark ? \n";
    cin >> mark.ChemistryMark;

    cout << "What is your Physics Mark ? \n";
    cin >> mark.PhysicsMark;

    cout << "What is your Biology Mark ? \n";
    cin >>  mark.BiologyMark;
}

void Calculate_Total(stMarks &mark)
{
    mark.Total_Mark =  mark.EnglishMark + mark.ChemistryMark + mark.PhysicsMark + mark.BiologyMark; // Give total mark value
}

void Display_Data( const stFullName &Info)
{
    cout << "\n************************\n";
    cout << "First name: " << Info.FirstName << endl;
    cout << "last name: " << Info.LastName << endl;
    cout << "Age: " << Info.age << endl;
}

void Display_Marks(const stMarks &mark)
{
    cout << "\n**********************\n";
    cout << "Your Total Mark = " << mark.Total_Mark << endl;
    cout << "Your average = " << mark.Total_Mark /4 << endl;
}

int main()
{
    stFullName Person1;
    stMarks Mark1;

    Get_Data(Person1);
    Get_Marks(Mark1);
    Calculate_Total(Mark1);

    Display_Data(Person1);
    Display_Marks(Mark1);
    return 0;
}
