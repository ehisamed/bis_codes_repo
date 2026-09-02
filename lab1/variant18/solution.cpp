#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (atan(pow(b, 2) + 1) + pow(cos(a), 3)) / ((a + b) * exp(fabs(b + c)));

    cout << "y = " << y << endl;
    return 0;
}
