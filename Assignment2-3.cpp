#include <iostream>

using namespace std;

int main()
{
  // create and initialize variables
  double regWages,
         basePay = 18.25,                 // hold regular wages
         regHours = 40.0,                 // base pay rate
         otWages,                         // non overtime hours worked
         otPay = 27.78,                   // overtime pay rate
         otHours = 10,                    // overtime hours worked
         totalWages;                      // hold total wages

  // calculate regular wages
  regWages = basePay * regHours;

  // calculate overtime wages
  otWages = otPay * otHours;

  // calculate total wages
  totalWages = regWages + otWages;

  // display total wages
  cout << "Your wages for this week amounts to $"
       << totalWages
       << ".\n";

  return 0;
}

// Regular wages = base pay rate (18.25) × regular hours (40) = 730
// Overtime wages = overtime pay rate (27.78) × overtime hours (10) = 277.8
// Total wages = regular wages (730) + overtime wages (277.8) = 1007.8
// Display the total wages