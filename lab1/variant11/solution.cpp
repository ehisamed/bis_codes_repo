#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = pow(sin(pow(a + b, 2)), 3) / (pow(a, 2) * (b + c));

    cout << "y = " << y << endl;
    return 0;
}
