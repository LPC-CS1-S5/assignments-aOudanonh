#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // declare and initialize
  const float SRATE = 0.2,                    // constant for service rate
              TRATE = 0.0675;                 // constant for tax rate

  float mealCost = 88.67,                     // variable for meal cost
        totalBill,                            // variable for total bill amount
        taxAmt,                               // variable for total amount of tax in currency
        serviceAmt;                           // variable for total amount of service charge in currency
  
  // calculations
  taxAmt = mealCost * TRATE;                  // calculate tax by multiplying meal cost with tax rate
  serviceAmt = (mealCost + taxAmt) * SRATE;   // calculate service charge by multiplying grand total by service rate
  totalBill = mealCost + taxAmt + serviceAmt; // calculate total bill by adding meal cost, tax, and service charge

  // display output
  cout << fixed                               // apply fixed point notation
       << setprecision(2)                     // apply precision of 2 decimal points

       << "Subtotal:    $"                    // print subtotal cost of the meal
       << mealCost
       << "\n"

       << "Tax:         $"                    // print tax amount (6.75%)
       << taxAmt
       << "\n"

       << "Tip:         $"                    // print tip amount (20%)
       << serviceAmt
       << "\n"

       << "Grand Total: $"                    // print grand total
       << totalBill
       << "\n";

  return 0;
}