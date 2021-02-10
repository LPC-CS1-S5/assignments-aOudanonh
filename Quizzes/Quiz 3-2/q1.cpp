#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
  // seed rng
  srand(time(0));

  // declare variables
  float sum,
        avg,
        n1 = rand(),
        n2 = rand(),
        n3 = rand();

  // calculate sum and average
  sum = n1 + n2 + n3;
  avg = sum / 3;

  // format output and display all numbers, sum, and average
  cout << setprecision(5)
       << fixed
       << showpoint

       << "The first number is "
       << n1
       << ".\n"

       << "The second number is "
       << n2
       << ".\n"

       << "The third number is "
       << n3
       << ".\n"

       << "The sum of these three numbers is "
       << sum
       << ".\n"

       << "The average is "
       << avg
       << ".\n";

  return 0;
}