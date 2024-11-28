#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

double fibonacci(int t) {
    if (t == 0) return 0;
    if (t == 1) return 1;
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i < t; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int main () {
    int t;
    cout << "Nhap t: ";
    cin >> t;
    double result = fibonacci(t);
    cout << "Fibonacci tai vi tri " << t << "la: " << result;
    return 0;
}