#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (pow(b, 2) * asin(c)) / (c * (cos(pow(a, 3)) + 1));

    cout << "y = " << y << endl;
    return 0;
}
