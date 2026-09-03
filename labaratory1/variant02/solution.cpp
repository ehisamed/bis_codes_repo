#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = tan(pow(a, 3) - fabs(b)) / (c * exp(b));

    cout << "y = " << y << endl;
    return 0;
}
