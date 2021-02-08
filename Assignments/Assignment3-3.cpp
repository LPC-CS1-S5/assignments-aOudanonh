#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // declare and initialize variables
  double celsius,
         fahrenheit;

  // welcome message and take temperature input from user in celsius
  cout << "This program will convert the temperature from celsius to fahrenheit.\n"
       << "Enter the temperature in celsius: ";
  cin >> celsius;

  // equation to convert from celsius to fahrenheit
  fahrenheit = (((9.0 / 5.0) * celsius) + 32.0);

  // output formatting and statements
  cout << fixed
       << setprecision(1)
       << showpoint

       << "The temperature in celsius is "
       << celsius
       << "° C\n"

       << "The temperature in fahrenheit is "
       << fahrenheit
       << "° F\n";

  return 0;
}