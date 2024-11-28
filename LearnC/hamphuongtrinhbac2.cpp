#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

void FindRoot(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d > 0) {
        double x1 = (-b + sqrt(d))/(2*a);
        double x2 = (-b - sqrt(d))/(2*a);
        cout << "hai nghiem phan biet: x1 = " << x1 << ", x2 = " << x2;
    } else if (d == 0) {
        double x = -b/(2*a);
        cout <<"nghiem kep: x = " << x;
    } else {
        cout << "Phuong trinh vo nghiem";
    }
}
int main () {
    double a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;
    if (a != 0) {
        FindRoot(a, b, c);
    } else {
        cout << "day ko phia pt bac 2";
    }
    return 0;
}