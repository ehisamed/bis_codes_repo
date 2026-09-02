#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (a * fabs(b + c) + log(pow(b, 2))) / (a * pow(log10(c + 1), 2));

    cout << "y = " << y << endl;
    return 0;
}
