#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // declare and define variables
  const float PERC1019 = 0.2,     // discount rates based on number of packages sold
              PERC2049 = 0.3,
              PERC5099 = 0.4,
              PERC100  = 0.5;

  float ogPrice = 99.00,          // price of a package
        discount,                 // hold discount rate value
        ogAmt,                    // hold net total before discount
        discountAmt,              // hold total amount of discount 
        totalAmt;                 // hold total charged after subtracting discount from net total

  int sold;                       // hold number of units sold

  // prompt user to input number of units sold
  cout << "Please enter the number of units sold: ";
  cin >> sold;

  // logic to validate input and determine appropriate discount rate
  if(sold < 0)
  {
    cout << "Error: You cannot input negative values here. Please restart the program.\n";
    return 0;
  }
  else if(sold < 20)
  {
    discount = PERC1019;
  }
  else if(sold < 50)
  {
    discount = PERC2049;
  }
  else if(sold < 100)
  {
    discount = PERC5099;
  }
  else
  {
    discount = PERC100;
  }

  // calculate values
  ogAmt = ogPrice * static_cast<float>(sold);
  discountAmt = ogAmt * discount;
  totalAmt = ogAmt - discountAmt;

  // format output, display relevant values
  cout << setprecision(2)
       << fixed
       << showpoint
  
       << "The original total is $"
       << ogAmt
       << "\n"

       << "The discount is $"
       << discountAmt
       << "\n"

       << "The final total after discount is $"
       << totalAmt
       << "\n";
  
  return 0;
}