#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, y;
    cout << "Vvedite a, b, c: ";
    cin >> a >> b >> c;

    y = sin(sqrt(a + b)) / (a * pow(tan(b + c), 2));

    cout << "y = " << y << endl;
    return 0;
}
