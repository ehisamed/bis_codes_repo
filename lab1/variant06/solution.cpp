#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (a - 2 * pow(sin(b), 3)) / (a * (tan(c) + b));

    cout << "y = " << y << endl;
    return 0;
}
