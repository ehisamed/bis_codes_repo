#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = sqrt(pow(fabs(a), b) - 2) / (b * (pow(c, 3) - 1));

    cout << "y = " << y << endl;
    return 0;
}
