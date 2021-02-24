#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  // declare variables
  const int CLASS_A = 15,                   // price for class a tickets
            CLASS_B = 12,                   // price for class b tickets
            CLASS_C = 9;                    // price for class c tickets
        
  int ticketA,                              // hold number of tickets for class a sold
      ticketB,                              // hold number of tickets for class b sold
      ticketC,                              // hold number of tickets for class c sold
      sales;                                // calculate and store total sales

  // prompt user and collect number of tickets sold for each class
  cout << "Enter the number of tickets sold for Class A: ";
  cin >> ticketA;

  cout << "\nEnter the number of tickets sold for Class B: ";
  cin >> ticketB;

  cout << "\nEnter the number of tickets sold for Class C: ";
  cin >> ticketC;

  // calculate total sales
  sales = (CLASS_A * ticketA) + (CLASS_B * ticketB) + (CLASS_C * ticketC);

  // format output and display total sales
  cout << showpoint
       << setprecision(2)
       << fixed

       << "The total amount of ticket sales is $"
       << static_cast<float>(sales)
       <<"\n";

  return 0;
}