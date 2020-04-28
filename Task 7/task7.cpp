#include <iostream>
using namespace std;

int main()
{
int year;

cout << "Please Enter a Year to check if it's a Leap Year: ";
cin >> year;

if ( year % 400 == 0)
{
cout << year <<" is a leap year. February has 29 days in " << year << endl;
}

if ( year % 100 != 0 and year % 4 == 0)
{
cout << year <<" is a leap year. February has 29 days in " << year << endl;
}

else
{
cout << year <<" is not a leap year. February has 28 days in " << year << endl;
}

return 0;
}
