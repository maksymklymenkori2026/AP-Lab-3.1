// лаба 3.1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    double y;
    double A;
    double B;
    cout << "x = "; cin >> x; 
    y = x * x;

    A = 2*abs(x-5);

    // method 1
    if (x < -1)
        B = (pow(sin(x), 2))/(1+abs(cos(x)));
    if (x >= -1 && x <= 1)
        B = pow(cos(1/(abs(x+2))),2);
    if (x > 1)
        B = log(abs(x+2));
    y = A - B;
    cout << "y = " << y << endl;

    //method 2
    y = x * x;
    if (x < -1)
        B = (pow(sin(x), 2))/(1+abs(cos(x)));
    else 
        if (x >= -1 && x <= 1)
            B = pow(cos(1/(abs(x+2))),2);
        else
            B = log(abs(x+2));
    
    y = A - B;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}