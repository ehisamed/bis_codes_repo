#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (pow(acos(b), 2) - exp(a + b)) / (fabs(a) * (b + c));

    cout << "y = " << y << endl;
    return 0;
}
