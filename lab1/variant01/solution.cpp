#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (2 * a - 3 * log(pow(b, 2) + 1)) / (b * (1 + pow(cos(c), 2)));

    cout << "y = " << y << endl;
    return 0;
}
