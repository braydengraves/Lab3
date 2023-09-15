/**
 *   @file: prog5.cc
 * @author: Brayden Graves
 *   @date: 9/15/2023
 *  @brief: Convert between celsius and fahrenheit values
 * 
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   double fah = 56;  //declare and initialize at the same time - page 48
   double cel = 20;

   ctof = (cel * 9/5) + 32;
   ftoc = (fah - 32) * 5/9;

   cout << cel << " degrees Celsius in Fahrenheit is " << fixed << setprecision(1) << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << fixed << setprecision(1) << ftoc << endl;

   return (EXIT_SUCCESS);
}
