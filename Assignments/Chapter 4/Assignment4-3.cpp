#include <iostream>
using namespace std;

int main()
{
  // declare variable to store user's input
  int choice;

  // tell user possible menu options and take their input
  cout << "Which formula do you want to see?\n"
       << "1. Area of a circle\n"
       << "2. Area of a rectangle\n"
       << "3. Area of a cylinder\n"
       << "4. None of them\n";
  cin >> choice;

  // give user the correct formula based on their input
  switch(choice)
  {
    case 1:
      cout << "Pi times radius squared\n";
      break;
    case 2:
      cout << "Length times width\n";
      break;
    case 3:
      cout << "Pi times radius squared times height\n";
      break;
    case 4:
      cout << "Alright then goodbye\n";
      break;
    default:
      cout << "Not good with numbers, eh?\n";
  }
  return 0;
}