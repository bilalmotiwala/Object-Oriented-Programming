#include <iostream>
using namespace std;

struct coordinates
{
int xaxis;
int yaxis;
};

int main()
{
coordinates point1;
coordinates point2;
coordinates point3;

cout << "Input X-axis for Point 1: ";
cin >> point1.xaxis;

cout << "Input Y-axis for Point 1: ";
cin >> point1.yaxis;

cout << "Input X-axis for Point 2: ";
cin >> point2.xaxis;

cout << "Input Y-axis for Point 2: ";
cin >> point2.yaxis;

point3.xaxis = point1.xaxis + point2.xaxis;
point3.yaxis = point1.yaxis + point2.yaxis;

cout << "Coordinates of Point 3 are: " << point3.xaxis << " & " <<point3.yaxis << endl;

return 0;
}
