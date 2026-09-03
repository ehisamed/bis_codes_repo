#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (sqrt(pow(2, a + b)) + acos(c)) / (b * atan(b / c));

    cout << "y = " << y << endl;
    return 0;
}
