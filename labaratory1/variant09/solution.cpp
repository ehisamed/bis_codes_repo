#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = pow(log10(fabs(a) + 3), c) / (b * pow(10, a));

    cout << "y = " << y << endl;
    return 0;
}
