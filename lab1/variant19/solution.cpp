#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (log(fabs(a)) + pow(b, c)) / (c * (pow(10, a) - pow(b, 2)));

    cout << "y = " << y << endl;
    return 0;
}
