#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (pow(acos(a), 2) - pow(b, 2)) / (b * (c - 1));

    cout << "y = " << y << endl;
    return 0;
}
