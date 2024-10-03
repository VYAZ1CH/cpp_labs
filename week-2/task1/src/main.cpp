#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Octagon{
private: 
    int inneradius;

public:

    void setinneradius(int inneradius) {
        this->inneradius = inneradius;
    }

    int getinneradius() {
        return inneradius;
    }

    int calculateArea() {
        return 8 * pow(inneradius, 2) * (sqrt(2) - 1);
    }

    double calculatePerimeter() {
        return 2 * inneradius * tan(M_PI/8);
    }


};

int main()
{
    Octagon O;
    O.setinneradius(100);
    cout << O.getinneradius() << endl;
    cout << O.calculateArea() << endl;
    cout << O.calculatePerimeter() << endl;
    
}
