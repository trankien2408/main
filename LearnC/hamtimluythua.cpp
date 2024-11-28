#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
 
double power(double x, int n ) {
    double result = 1;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result ;
} 
int main () {
    double x;
    int n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    double result = power(x, n);
    cout << x << "^" << n << " = "  << result;
    return 0; 
}