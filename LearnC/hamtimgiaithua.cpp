#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

double factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main () {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    double result = factorial(n);
    cout << result;
    return 0;
}