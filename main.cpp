// Sample main program to test a few Distance class features
//  Write your own calls to test more thoroughly!!
// Author:  Bob Myers

#include <iostream>
#include "distance.h"

using namespace std;

int main()
{
   Distance d1, d2(0), d3(123456), d4(987654321), d5(5,400,2,4);
   cout << "d1 = " << d1 << '\n';   // should output: (0")              [default constructor]
   cout << "d2 = " << d2 << '\n';   // should output: (0")
   cout << "d3 = " << d3 << '\n';   // should output: (1m 1669y 1')     [1x int constructor]
   cout << "d4 = " << d4 << '\n';   // should output: (15587m 1722y 9") 
   cout << "d5 = " << d5 << '\n';   // should output: (5m 400y 2' 4")   [4x int constructor]

   cout << "Enter first Distance object (MILES,YDS,FT,IN):  ";
   cin >> d1;

   cout << "Enter second Distance object (MILES,YDS,FT,IN):  ";
   cin >> d2;

   cout << "\n"; 
   
   cout << "d1 = " << d1 << '\n';   // checking istream
   cout << "d2 = " << d2 << '\n';  
   
   cout << d1 << " + " << d2 << " = " << d1 + d2 << '\n';
   cout << d1 << " - " << d2 << " = " << d1 - d2 << "\n\n";

   if (d1 < d2) 	cout << d1 << " <  " << d2 << " is TRUE\n";
   if (d1 > d2) 	cout << d1 << " >  " << d2 << " is TRUE\n";
   if (d1 <= d2) 	cout << d1 << " <= " << d2 << " is TRUE\n";
   if (d1 >= d2) 	cout << d1 << " >= " << d2 << " is TRUE\n";
   if (d1 == d2) 	cout << d1 << " == " << d2 << " is TRUE\n";
   if (d1 != d2) 	cout << d1 << " != " << d2 << " is TRUE\n\n";

   cout << d1 << " + 654321 = " << d1 + 654321 << '\n';
   cout << d2 << " + 15263748 = " << d2 + 15263748 << '\n';
 
   cout << "\nMultiplication Checking: \n";
   cout << d1 * 3;
   // cout << "d1 = " << d1 << '\n';   // checking *
   
   cout << d2 * 5;
   // cout << "d2 = " << d2 << '\n';  // checking *

   cout << "\nIncrement Checking: \n";
   cout << d1++;            //  prints (2m 10y 2' 10"), d1 is now (2m 10y 2' 11")
   cout << "\n"; 
   cout << ++d1;            //  prints (2m 11y 0"), d1 is now (2m 11y 0")
   cout << "\n"; 
   cout << d2--;            //  prints (5m 51y 1' 1"), d2 is now (5m 51y 1' 0")
   cout << "\n"; 
   cout << --d2;            //  prints (5m 51y 11"), d2 is now (5m 51y 11")
   cout << "\n"; 
}

