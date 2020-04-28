#include <iostream>
using namespace std;

struct employee
{
int number;
float compensation;
};

int main()
{

employee person1;
employee person2;
employee person3;

cout << " Please Enter the Employee ID of Employee 1: ";
cin >> person1.number;

cout << "Please Enter the Compensation of Employee 1 : ";
cin >> person1.compensation;

cout << " Please Enter the Employee ID of Employee 2: ";
cin >> person2.number;

cout << "Please Enter the Compensation of Employee 2 : ";
cin >> person2.compensation;

cout << " Please Enter the Employee ID of Employee 3: ";
cin >> person3.number;

cout << "Please Enter the Compensation of Employee 3 : ";
cin >> person3.compensation;

cout << "The ID number of Employee 1 is " << person1.number << ". Their compensation is " << person1.compensation << " GEL." << endl;

cout << "The ID number of Employee 2 is " << person2.number << ". Their compensation is " << person2.compensation << " GEL." << endl;

cout << "The ID number of Employee 3 is " << person3.number << ". Their compensation is " << person3.compensation << " GEL." << endl;

return 0;
}
