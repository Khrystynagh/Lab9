#include <iostream>
#include <iomanip>
#define _USE__MATH_DEFINES
#include <cmath>

#include "lab9.h"

using namespace std;

int main()
{
    
 setlocale(LC_ALL, "rus");
 char str[200];

 
 cout << "Input string : ";
 cin.getline(str,200);
 
 int count = task(str);
    
 cout << "Result: " << str << endl;
 cout << "Count of spaces: " << count << endl;
 
 return 0;
}
