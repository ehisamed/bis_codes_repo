#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = sqrt(exp(a) + pow(tan(b), 2)) / ((a + b) * c);

    cout << "y = " << y << endl;
    return 0;
}
