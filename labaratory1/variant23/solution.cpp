#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (pow(tan(a), 2) + pow(acos(b), 2)) / (a * (c + cos(b)));

    cout << "y = " << y << endl;
    return 0;
}
