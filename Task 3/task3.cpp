#include <iostream>
using namespace std;

struct measurements
{
int feet;
float inches;
};

struct volume
{
measurements length;
measurements width;
measurements height;
};

int main()
{
volume room;

room.length.feet = 15;
room.length.inches = 7.0;
room.width.feet = 9;
room.width.inches = 2.0;
room.height.feet = 8;
room.height.inches - 0.0;

float l = room.length.feet + room.length.inches/12;
float w = room.width.feet + room.width.inches/12;
float h = room.height.feet + room.height.inches/12;

cout << "The volume of the desired room is calculated to be: " << l*w*h << " cubic feet.";

return 0;
}
