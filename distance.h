
/* Name: Andrew Stade
Date: 2/17/2020
Section: 2 */

#include <iostream>
using namespace std;

class Distance
{
   // Math operators
   friend Distance operator+(const Distance& a, const Distance& b);
   friend Distance operator-(const Distance& a, const Distance& b);
   friend Distance operator*(const Distance& a, const int& b);
   
   // Comparing operators
   friend bool operator<(const Distance& a, const Distance& b);
   friend bool operator>(const Distance& a, const Distance& b);
   friend bool operator<=(const Distance& a, const Distance& b);
   friend bool operator>=(const Distance& a, const Distance& b);
   friend bool operator==(const Distance& a, const Distance& b);
   friend bool operator!=(const Distance& a, const Distance& b);
   
   // Output/Input operators
   friend ostream& operator<<(ostream& o, const Distance& x);
   friend istream& operator>>(istream& i, Distance& x);   
    
public:
    Distance();
    Distance(int val);
    Distance(int m, int y, int f, int i);
    
    // Increment and decrement operators
    Distance& operator++(); 
    Distance operator++(int);
    Distance& operator--();
    Distance operator--(int);

private:
    int miles;
    int yards;
    int feet;
    int inches;
};