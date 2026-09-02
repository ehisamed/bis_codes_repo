#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (sin(pow(10, a)) + sqrt(pow(b, 2) + pow(c, 2))) / (a * tan(b / c));

    cout << "y = " << y << endl;
    return 0;
}
