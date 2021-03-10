
/* Name: Andrew Stade
Date: 2/2/2020
Section: 2 */

#include <iostream>
#include "distance.h"

using namespace std;

Distance operator+(const Distance& a, const Distance& b) // Complete
{
    Distance result;
    
    result.miles = a.miles + b.miles;
    result.yards = a.yards + b.yards;
    result.feet = a.feet + b.feet;
    result.inches = a.inches + b.inches;
    
    result = Distance(result.miles,result.yards,result.feet,result.inches);
    
    return result;
}

Distance operator-(const Distance& a, const Distance& b) // Complete
{
    Distance result;
    
    if (a.miles == b.miles)
    {
        if (a.yards == b.yards)
        {
            if (a.feet == b.feet)
            {
                if (a.inches < b.inches)
                {
                    result.miles = 0;
                    result.yards = 0;
                    result.feet = 0;
                    result.inches = 0;
                }
                else
                {
                    result.miles = a.miles - b.miles;
                    result.yards = a.yards - b.yards;
                    result.feet = a.feet - b.feet;
                    result.inches = a.inches - b.inches;
                }
            }
            else if (a.feet < b.inches)
            {
                result.miles = 0;
                result.yards = 0;
                result.feet = 0;
                result.inches = 0;
            }
            else
            {
                result.miles = a.miles - b.miles;
                result.yards = a.yards - b.yards;
                result.feet = a.feet - b.feet;
                result.inches = a.inches - b.inches;
            }
        }
        else if (a.yards < b.yards)
        {
            result.miles = 0;
            result.yards = 0;
            result.feet = 0;
            result.inches = 0;
        }
        else
        {
            result.miles = a.miles - b.miles;
            result.yards = a.yards - b.yards;
            result.feet = a.feet - b.feet;
            result.inches = a.inches - b.inches;
        }
    }
    else if (a.miles < b.miles)
    {
        result.miles = 0;
        result.yards = 0;
        result.feet = 0;
        result.inches = 0;
    }
    else
    {
        result.miles = a.miles - b.miles;
        result.yards = a.yards - b.yards;
        result.feet = a.feet - b.feet;
        result.inches = a.inches - b.inches;
    }
    
    result = Distance(result.miles,result.yards,result.feet,result.inches);
    
    return result;
}

Distance operator*(const Distance& a, const int& b) // Complete
{
    Distance result;
    
    result.miles = a.miles * b;
    result.yards = a.yards * b;
    result.feet = a.feet * b;
    result.inches = a.inches * b;
    
    result = Distance(result.miles,result.yards,result.feet,result.inches);
    
    return result;
}

bool operator<(const Distance& a, const Distance& b) // Complete
{
    if (a.miles == b.miles)
    {
        if (a.yards == b.yards)
        {
            if (a.feet == b.feet)
            {
                if (a.inches < b.inches)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if (a.feet < b.feet)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (a.yards < b.yards)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (a.feet < b.feet)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator>(const Distance& a, const Distance& b) // Complete
{
    return (b < a);
}

bool operator<=(const Distance& a, const Distance& b) // Complete
{
    return (!(a > b));
}

bool operator>=(const Distance& a, const Distance& b) // Complete
{
    return (!(a < b));
}

bool operator==(const Distance& a, const Distance& b) // Complete
{
    if (a.miles == b.miles)
    {
        if (a.yards == b.yards)
        {
            if (a.feet == b.feet)
            {
                if (a.inches == b. inches)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

bool operator!=(const Distance& a, const Distance& b) // Complete
{
    if (a.miles == b.miles)
    {
        if (a.yards == b.yards)
        {
            if (a.feet == b.feet)
            {
                if (a.inches == b. inches)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else
            {
                return true;
            }
        }
        else
        {
            return true;
        }
    }
    else
    {
        return true;
    }
}

ostream& operator<<(ostream& o, const Distance& x) // Complete
{
    if (x.miles == 0 && x.yards == 0 && x.feet == 0 && x.inches > 0)
    {
        o << "(" << x.inches << "\"" << ")";
    }
    else if (x.miles == 0 && x.yards == 0 && x.feet > 0)
    {
        if (x.inches > 0)
        {
            o << "(" << x.feet << "\' " << x.inches << "\"" << ")"; 
        }
        else 
        {
            o << "(" << x.feet << "\'" << ")";
        }
    }
    else if (x.miles == 0 && x.yards > 0)
    {
        if (x.feet > 0 && x.inches > 0)
        {
            o << "(" << x.yards << "y " << x.feet << "\' " << x.inches << "\"" << ")"; 
        }
        else if (x.feet > 0)
        {
            o << "(" << x.yards << "y " << x.feet << "\'" << ")";
        }
        else if (x.inches > 0)
        {
            o << "(" << x.yards << "y " << x.inches << "\"" << ")";
        }
        else
        {
            o << "(" << x.yards << "y" << ")"; 
        }
    }
    else if (x.miles > 0)
    {
        if (x.yards > 0 && x.feet > 0 && x.inches > 0)
        {
            o << "(" << x.miles << "m " << x.yards << "y " << x.feet << "\' " << x.inches << "\"" << ")"; 
        }
        else if (x.yards > 0 && x.feet > 0)
        {
            o << "(" << x.miles << "m " << x.yards << "y " << x.feet << "\'" << ")";
        }
        else if (x.yards > 0 && x.inches > 0)
        {
            o << "(" << x.miles << "m " << x.yards << "y " << x.inches << "\"" << ")"; 
        }
        else if (x.feet > 0 && x.inches > 0)
        {
            o << "(" << x.miles << "m " << x.feet << "\' " << x.inches << "\"" << ")"; 
        }
        else if (x.yards > 0)
        {
            o << "(" << x.miles << "m " << x.yards << "y" << ")";
        }
        else if (x.feet > 0)
        {
            o << "(" << x.miles << "m " << x.feet << "\'" << ")";
        }
        else if (x.inches > 0)
        {
            o << "(" << x.miles << "m " << x.inches << "\"" << ")";
        }
        else
        {
            o << "(" << x.miles << "m" << ")";
        }            
    }
    else
    {
        o << "(" << 0 << "\"" << ")";
    }
}

istream& operator>>(istream& i, Distance& x) // Complete
{   
    char comma = ','; 
    
    i >> x.miles >> comma >> x.yards >> comma >> x.feet >> comma >> x.inches;
    
    x = Distance(x.miles,x.yards,x.feet,x.inches);
}
    
Distance::Distance() // Complete
{
    miles = 0;
    yards = 0;
    feet = 0;
    inches = 0;
}

Distance::Distance(int val) // Complete
{
    if (val > 0)
    {
        miles = 0;
        yards = 0;
        feet = 0;
        inches = 0;
        do
        {
            if (val >= 63360)
            {
                miles++;
                val = val - 63360;
            }
            else if (val >= 36)
            {
                yards++;
                val = val - 36;
            }
            else if (val >= 12)
            {
                feet++;
                val = val - 12;
            }
            else
            {
                inches++;
                val = val - 1;
            }
        } while (val > 0);
    }
    else if (val <= 0)
    {
        miles = 0;
        yards = 0;
        feet = 0;
        inches = 0;
    }
}

Distance::Distance(int m, int y, int f, int i) // Complete
{
    if (m >= 0 && y >= 0 && f >= 0 && i >= 0)
    {
        miles = m;
        do
        {
            if (y >= 1760)
            {
                miles++;
                y = y - 1760;
            }
            else if (f >= 3)
            {
                y++;
                f = f - 3;
            }
            else if (i >= 12)
            {
                f++;
                i = i - 12;
            }
        } while (y >= 1760 || f >= 3 || i >= 12);
        yards = y;
        feet = f;
        inches = i;
    }
    else if (m < 0 || y < 0 || f < 0 || i < 0)
    {
        miles = 0;
        yards = 0;
        feet = 0;
        inches = 0;
    }
}

Distance& Distance::operator++() // Complete
{
   inches = inches + 1;
   return *this;
}

Distance Distance::operator++(int) // Complete
{
   Distance temp = *this;	
   inches = inches + 1;		
   return temp;	 
}

Distance& Distance::operator--() // Complete
{
   inches = inches - 1;
   return *this; 
}

Distance Distance::operator--(int) // Complete
{
   Distance temp = *this;	
   inches = inches - 1;		
   return temp;
}