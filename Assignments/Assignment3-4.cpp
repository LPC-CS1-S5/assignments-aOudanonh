#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // declare and define variables
  string month1,
         month2,
         month3;

  float rain1,
        rain2,
        rain3,
        rainAvg;
  
  // prompt user for month name and rain amount
  cout << "Enter the first month and the rain amount in inches.\n"
       << "Month 1 Name: ";
  cin  >> month1;
  cout << "\nRain amount: ";
  cin  >> rain1;

  cout << "Enter the second month and the rain amount in inches.\n"
       << "Month 2 Name: ";
  cin  >> month2;
  cout << "\nRain amount: ";
  cin  >> rain2;

  cout << "Enter the third month and the rain amount in inches.\n"
       << "Month 3 Name: ";
  cin  >> month3;
  cout << "\nRain amount: ";
  cin  >> rain3;

  // calculate average rainfall
  rainAvg = ((rain1 + rain2 + rain3) / 3);

  // format output, display average rainfall and names of months
  cout << fixed
       << setprecision(2)
       << showpoint
       
       << "The average rainfall for "
       << month1
       << ", "
       << month2
       << ", and "
       << month3
       << " is "
       << rainAvg
       << " inches.";

  return 0;
}