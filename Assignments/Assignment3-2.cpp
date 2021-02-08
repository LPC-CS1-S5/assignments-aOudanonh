#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // declare and initialize variables
  int males,
      females,
      total;

  float malePct,
        femalePct;

  // prompt user for number of male and female students
  cout << "Please input the number of male students: ";
  cin >> males;

  cout << "\nPlease input the number of female students: ";
  cin >> females;

  // add males and females to find total number of students
  total = males + females;

  // find the percent of males and females in the class
  malePct = (static_cast<float>(males) / static_cast<float>(total)) * 100;
  femalePct = (static_cast<float>(females) / static_cast<float>(total)) * 100;

  // output results
  cout << fixed
       << setprecision(1)
       << showpoint

       << "\nThere are "
       << males
       << " male students and "
       << females
       << " female students.\n"
       << "There are "
       << total
       << " students overall.\n"

       << "The percentage of male students in this class is "
       << malePct
       << "%\n"

       << "The percentage of female students in this class is "
       << femalePct
       << "%\n";
       
  return 0;
}