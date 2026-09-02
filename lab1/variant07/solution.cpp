#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = (exp(a) + fabs(b)) / (a * log(pow(c, 4) + 1));

    cout << "y = " << y << endl;
    return 0;
}
