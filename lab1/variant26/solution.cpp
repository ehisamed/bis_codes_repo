#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (exp(c) + fabs(pow(b, 2) - a)) / (a * pow(log(b + c), 2));

    cout << "y = " << y << endl;
    return 0;
}
