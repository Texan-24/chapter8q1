#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;


float days;
float cur_day_cents = .01, total;

int main()
{
  int num_days;

  cout << "Enter number of days:" << endl;
  cin >> num_days;
  
  if ((days >=1) && (days <=30))
  ;
  for (int d = 0; d < num_days; d++)
{
   total += cur_day_cents;

   cur_day_cents *=2;

 
}
  cout << fixed << setprecision (2) << total << endl;
}