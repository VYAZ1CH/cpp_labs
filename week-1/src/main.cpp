#include <cmath>
#include <math.h>
#include <iostream>
using namespace std;
double area(double a);
int main()
{	
	
	short n = 32767;  // 2 Bytes
	unsigned short  b = 65535; // 2 Bytes
	long d =  223372036854775807; // 8 Bytes
	unsigned long a = 18446744073709551615; // 8 Bytes	
	int f = 0;
	cout << "Hello World" << endl;
	cout << "Short max: " << n << endl;
	cout << "Unsignet short max: " << b << endl;
	cout << "Long max:  " << d << endl;
	cout << "Unsignet long: " << a << endl;
	cout << "Enter Length" << endl;
	cin >> f;
	cout << "Volume of the Icosahedron: "<< area(f) << endl;
}

double area(double a) {

   return (5.0 / 12.0) * (3 + sqrt(5)) * pow(a, 3);
}
