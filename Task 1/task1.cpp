#include <iostream>
using namespace std;

struct phone //Creating a structure for phone number.
{
  int areacode;
  int exchange;
  int number;
};

  
int main()
{
  phone phone1 = {555,983,923};
  phone phone2;

  cout << "Enter your Area Code Please" << endl;
  cin >> phone2.areacode;

  cout << "Enter your Exchange Code Please" << endl;
  cin >> phone2.exchange;

  cout << "Enter your Phone Number Please" << endl;
  cin >> phone2.number;

  cout << "My Phone Number is: (" << phone1.areacode << ")" << phone1.exchange << "-" << phone1.number << endl;

  cout << "Your Phone Number is: (" << phone2.areacode << ")" << phone2.exchange << "-" << phone2.number << endl;

  return 0;
}
