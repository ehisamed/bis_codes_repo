#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (log(pow(a, 2) + pow(b, 2)) + log10(c)) / (b * (pow(a, b) + c));

    cout << "y = " << y << endl;
    return 0;
}
