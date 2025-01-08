//9.Find whether the given year is leap year based on Gregorian calender
/*A year that is divisible by 4 is known as a leap year. However, years divisible by 100 are not leap years while those divisible by 400 are.*/
#include <iostream>
using namespace std;
int main()
{
 int year;
 cout << "Enter a year: ";
 cin >> year;
 // Check if the year is a leap year
 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  {
  cout << year << " is a leap year." << endl;
  }
  else
  {
   cout << year << " is not a leap year." << endl;
  }
}
                                                                                                                      
