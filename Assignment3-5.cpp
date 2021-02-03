#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  //seed
  srand(time(0));

  // declare and initialize variables
  float num1 = rand() % 100,
        num2 = rand() % 100,
        num3 = rand() % 100,
        sum,
        avg;

  // calculate
  sum = num1 + num2 + num3;
  avg = sum / 3;

  // format and output
  cout << setprecision(2)
       << fixed
       << showpoint

       << "The sum of all values is "
       << sum
       <<"\n"

       << "The average is "
       << avg
       << "\n";

  return 0;
}