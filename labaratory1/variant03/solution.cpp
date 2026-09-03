#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (2 * pow(cos(pow(c, 3)), 2) + 3 * a) / (a * (fabs(b * cos(a)) + 1));

    cout << "y = " << y << endl;
    return 0;
}
