#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = sqrt(pow(sin(pow(a, 3)), 2)) / (a * atan(b / c));

    cout << "y = " << y << endl;
    return 0;
}
