#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = sqrt(b + pow(cos(a), 2) + exp(c)) / fabs(a + b + c);

    cout << "y = " << y << endl;
    return 0;
}
