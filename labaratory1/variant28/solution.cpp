#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (log10(pow(a, 3)) + pow(b, a + c)) / ((a + b) * pow(10, c));

    cout << "y = " << y << endl;
    return 0;
}
