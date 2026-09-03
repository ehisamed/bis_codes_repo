#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = sqrt(pow(asin(b), 2) + 1) / (c * (exp(a) + fabs(b)));

    cout << "y = " << y << endl;
    return 0;
}
