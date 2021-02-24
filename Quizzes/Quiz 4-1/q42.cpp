#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // declare variables
  const float TWO_UNDER    = 1.10,     // shipping rate per 500 miles
              SIX_UNDER    = 2.20,
              TEN_UNDER    = 3.70,
              TWENTY_UNDER = 4.80;
  
  float distance,
        rate,
        weight,
        charge;

  // ask user for weight of the package and shipping distance
  cout << "I will calculate your shipping charge!\n"
       << "Enter the weight of your package in kilograms: ";
  cin >> weight;

  // input validation for weight
  if(weight <= 0 || weight > 20.0)
  {
    cout << "Invalid weight! Sorry, we cannot ship this :(\n";
    return 0;
  }

  cout << "Enter the distance to be shipped in miles: ";
  cin >> distance;

  // input validation for distance
  if(distance < 10.0 || distance > 3000.0)
  {
    cout << "Invalid distance! Sorry, we cannot ship this :(\n";
    return 0;
  }

  // apply the correct shipping rate based on the input for package weight
  if(weight <= 2.0)
  {
    rate = TWO_UNDER;
  }
  else if(weight <= 6.0)
  {
    rate = SIX_UNDER;
  }
  else if(weight <= 10.0)
  {
    rate = TEN_UNDER;
  }
  else
  {
    rate = TWENTY_UNDER;
  }

  // calculate shipping charge
  charge = (distance / 500.0) * rate;

  // display the charge to the user
  cout << setprecision(2)
       << fixed
       << showpoint

       << "Your cost for shipping your "
       << weight
       << " kg package "
       << distance
       << " miles is $"
       << charge
       << "\n";

  return 0;
}