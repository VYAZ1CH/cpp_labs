#include <cmath>
#include <math.h>
#include <iostream>
using namespace std;
double area(double a);
int main()
{
    cout << area(10) << endl;
}

double area(double a) {

   return (5.0 / 12.0) * (3 + sqrt(5)) * pow(a, 3);
}



