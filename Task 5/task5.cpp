#include <iostream>
using namespace std;

struct date
{
int month;
int date;
int year;
};

int main()
{

date date1;

cout << "Please Enter the Month in (MM): ";
cin >> date1.month;

cout << "Please Enter the Date in (DD): ";
cin >> date1.date;

cout << "Please Enter the Year in (YYYY) : ";
cin >> date1.year;

cout << "The Entered Date is " << date1.month << "/" << date1.date << "/" << date1.year << endl;

return 0;
}



