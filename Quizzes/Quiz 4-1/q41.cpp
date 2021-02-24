#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // declare variable to get user's choice
  int choice;

  // declare variables for calculation
  float area,
        length,
        width,
        base,
        height,
        radius;

  // declare constant for pi
  const float PI = 3.14159; 

  // display possible options and take choice
  cout << "        Geometry calculator\n"
       << "------------------------------------\n"
       << "1. Calculate the area of a Circle\n"
       << "2. Calculate the area of a Rectangle\n"
       << "3. Calculate the area of a Triangle\n"
       << "4. Quit\n\n"
       << "Enter your choice (1-4): ";
  cin >> choice;

  // menu: direct to proper case based on user input for choice
  switch(choice)
  {
    // AREA OF A CIRCLE
    case 1:
      // prompt user for the radius and store value
      cout << "Please enter the radius of the circle: ";
      cin >> radius;

      // validate input for radius
      if(radius > 0)
      {
        // calculate area
        area = (radius * radius) * PI;

        // display area
        cout << setprecision(3)
             << fixed
             << showpoint

             << "The area of the circle is "
             << area
             << "\n";
      }
      else
      {
        cout << "Error: you cannot have a negative or zero radius.\n";
      }
      break;

    // AREA OF A RECTANGLE
    case 2:
      // prompt user for length and width and store values
      cout << "Please enter the length of the rectangle: ";
      cin >> length;
      cout << "Please enter the width of the rectangle: ";
      cin >> width;

      // validate input for length and width
      if(length > 0 && width > 0)
      {
        // calculate area
        area = length * width;

        // display area
        cout << setprecision(3)
             << fixed
             << showpoint

             << "The area of the rectangle is "
             << area
             << "\n";
      }
      else
      {
        cout << "Error: the length/width cannot be negative or zero.\n";
      }
      break;

    // AREA OF A TRIANGLE
    case 3:
      // prompt user for base and height and store values
      cout << "Please enter the base of the triangle: ";
      cin >> base;
      cout << "Please enter the height of the triangle: ";
      cin >> height;

      // validate input for base and height
      if(base > 0 && height > 0)
      {
        // calculate area
        area = base * height * 0.5;

        // display area
        cout << setprecision(3)
             << fixed
             << showpoint

             << "The area of the triangle is "
             << area
             << "\n";
      }
      else
      {
        cout << "Error: the base/height cannot be negative or zero.\n";
      }
      break;

    // QUIT
    case 4:
      cout << "Goodbye!\n";
      return 0;

    // INVALID MENU INPUT
    default:
      cout << "You have entered an invalid option!\n";
  }
  return 0;
}