#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void convertTemperature(double c, double* k, double* f) {
    *k = c + 273;
    *f = (c * 9 / 5) + 32;
}
int main () {
    double c, k, f;
    cout << "Nhap nhiet do C: ";
    cin >> c;
    convertTemperature(c, &k, &f);
    cout << c << " C = " << k << " K" << endl;
    cout << c << " C = " << f << " F";
    return 0;
}