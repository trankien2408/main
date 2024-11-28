#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int Sum(const int* a, int n) {
    int tong = 0;
    for(int i = 0; i < n; i++) {
        tong += a[i]; 
    }
    return tong;
}
int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int kq = Sum(a, n);
    cout << "Tong cua mang la: " << kq;
    return 0;
}