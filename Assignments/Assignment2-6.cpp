#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  // declare and initialize variables
  float average;                            // declare variable for average of the numbers

  int sum,                                  // declare variable for sum of stored numbers
      n1 = 28,                              // declare and initialize variables to store numbers
      n2 = 32,
      n3 = 37,
      n4 = 24,
      n5 = 33;

  // calculations
  sum = n1 + n2 + n3 + n4 + n5;             // calculate sum of stored numbers
  average = static_cast<float>(sum) / 5;    // convert sum from int to float and calculate the average

  // output manipulation and print
  cout << fixed                             // fixed point notation
       << setprecision(3)                   // set decimal precision to 3

       << "The sum of your numbers is "     // print the sum of the numbers
       << sum
       << ".\n"

       << "The average of your numbers is " // print the average of the numbers
       << average
       << ".\n";
  
  return 0;
}