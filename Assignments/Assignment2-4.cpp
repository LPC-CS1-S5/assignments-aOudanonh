#include <iostream>

using namespace std;

int main()
{
  // declare and initialize variables
  double regPrice = 59.95,
         discount,
         salePrice;
  
  // calculate 20% discount
  discount = regPrice * 0.2;

  // calculate sale price, subtract discount from regular price
  salePrice = regPrice - discount;

  // display results
  cout << "Regular Price: $"
       << regPrice
       << "\n"

       << "Discount amount: $"
       << discount
       << "\n"

       << "Sale Price: $"
       << salePrice
       << "\n";
  
  return 0;
}

//regular price = 59.95
//regular price * 20% = discount
//regular price - discount = sale price
//display amounts