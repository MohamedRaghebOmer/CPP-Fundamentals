#include <iostream>
using namespace std;

struct address
{
    string country_name;
    string city_name;
    string street_name;
};


struct student
{
    string name;
    int age;
    string Classroom;
    address address1;
};

int main()
{
    student s1 ,s2 ,s3;

    //Get First student data
    cout << "First student \n \n";

    cout << "First student name : ";
        cin >> s1.name;
    cout << "First student age : ";
        cin >> s1.age;
    cout << "First student Classroom : ";
        cin >> s1.Classroom;
    cout << "First student country name : ";
        cin >> s1.address1.country_name;
    cout << "First student city name : ";
        cin >> s1.address1.city_name;
    cout << "First student street name : ";
        cin >> s1.address1.street_name;


    // Get Second student data
    cout << "\nSecond student \n\n";

    cout << "Second student name : ";
        cin >> s2.name;
    cout << "Second student age : ";
        cin >> s2.age;
    cout << "Second student Classroom : ";
        cin >> s2.Classroom;
    cout << "Second student country name : ";
        cin >> s2.address1.country_name;
    cout << "Second student city name : ";
        cin >> s2.address1.city_name;
    cout << "Second student street name : ";
        cin >> s2.address1.street_name;

    //  Get Third student data
    cout << "\nThird student \n\n";

    cout << "Third student name : ";
        cin >> s3.name;
    cout << "Third student age : ";
        cin >> s3.age;
    cout << "Third student Classroom : ";
        cin >> s3.Classroom;
    cout << "Third student country name : ";
        cin >> s3.address1.country_name;
    cout << "Third student city name : ";
        cin >> s3.address1.city_name;
    cout << "Third student street name : ";
        cin >> s3.address1.street_name;


    // Display the three student data
    cout << "\n___________________Result_____________________ \n \n";


    // First student data
    cout << " \nshow First student data \n\n";

    cout << "First student name : " << s1.name << endl;
    cout << "First student age : " << s1.age << endl;
    cout << "First student Classroom : " << s1.Classroom << endl;
    cout << "First student country name : " << s1.address1.country_name << endl;
    cout << "First student city name : " << s1.address1.city_name << endl;
    cout << "First student street name : " << s1.address1.street_name << endl;


    // Second student data
    cout << "\nshow Second student data \n\n";


    cout << "Second student name : " << s2.name << endl;
    cout << "Second student age : " << s2.age << endl;
    cout << "Second student Classroom : " << s2.Classroom << endl;
    cout << "Second student country name : " << s2.address1.country_name << endl;
    cout << "Second student city name : " << s2.address1.city_name << endl;
    cout << "Second student street name : " << s2.address1.street_name << endl;

    //Third student data
    cout << "\nshow Third student data \n\n";

    cout << "Third student name : " << s3.name << endl;
    cout << "Third student age : " << s3.age << endl;
    cout << "Third student Classroom : " << s3.Classroom << endl;
    cout << "Third student country name : " << s3.address1.country_name << endl;
    cout << "Third student city name : " << s3.address1.city_name << endl;
    cout << "Third student street name : " << s3.address1.street_name << endl;

    return 0;
}
