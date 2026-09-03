#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (pow(10, a + b) + pow(sin(c), 3)) / (b * sqrt(pow(a, 2) + pow(b, 2)));

    cout << "y = " << y << endl;
    return 0;
}
