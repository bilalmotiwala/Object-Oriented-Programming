#include <iostream>
using namespace std;

struct times
{
int hours;
int minutes;
int seconds;
};

int main()
{

times tm;

cout << "Please Enter Hours in (HH): ";
cin >> tm.hours;

cout << "Please Enter Minutes in (MM): ";
cin >> tm.minutes;

cout << "Please Enter Seconds in (SS): ";
cin >> tm.seconds;

long totalseconds = tm.hours*3600 + tm.minutes*60 + tm.seconds;

cout << "The Entered Time in seconds is: " << totalseconds << endl;

return 0;
}
