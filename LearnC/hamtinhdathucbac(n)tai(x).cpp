#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

double Calc(const double* a, int n, int x) {
    double result = 0;
    for (int i = 0; i <= n; ++i) {
        result = result * x + a[i];
    }
    return result;
}
int main() {
    double c[] = {2, 3, -7, -4};
    int n = 3;
    int x = 3;
    double value = Calc(c, n, x);
    cout << "Gia tri cua da thuc tai x = " << x << " la: " << value;
    return 0;
}