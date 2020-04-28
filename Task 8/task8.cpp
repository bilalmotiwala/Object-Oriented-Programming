#include <iostream>
using namespace std;

struct timediff
{
int hours;
int minutes;
int seconds;
}; 

int main()
{

timediff time1;
timediff time2;

cout << "Start Time" << endl;
cout << "----------" << endl;

cout << "Enter Hours in (HH): ";
cin >> time1.hours;

cout << "Enter Minutes in (MM): ";
cin >> time1.minutes;

cout << "Enter Seconds in (SS): ";
cin >> time1.seconds;

cout << "Stop Time" << endl;
cout << "---------" << endl;

cout << "Enter Hours in (HH): ";
cin >> time2.hours;

cout << "Enter Minutes in (MM): ";
cin >> time2.minutes;

cout << "Enter Seconds in (SS): ";
cin >> time2.seconds;

int hr = time1.hours - time2.hours;
int min = time1.minutes - time2.minutes;
int sec = time1.seconds - time2.seconds;

cout << "Time Difference: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << " - " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << " = " << hr << ":" << min << ":" << sec << endl;

cout << "In case the timestamp is negative for all, this indicates a time difference of over 24 hours plus the calculated time as above." << endl;

return 0;
}
