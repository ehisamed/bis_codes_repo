#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (pow(tan(a), 2) - b * c) / (b * acos(pow(b, 2) + pow(c, 2)));

    cout << "y = " << y << endl;
    return 0;
}
