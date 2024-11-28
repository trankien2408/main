#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

struct Phanso {
    int tuSo;
    int mauSo;
};
int UCLN(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
Phanso toigianphanso(Phanso ps) {
    int ucln = UCLN(ps.tuSo, ps.mauSo);
    ps.tuSo /= ucln;
    ps.mauSo /= ucln;
    return ps;
}
int main() {
    Phanso ps;
    cout << "Nhap tu so: ";
    cin >> ps.tuSo;
    cout << "Nhap mau so: ";
    cin >> ps.mauSo;
    if (ps.mauSo == 0) {
        cout << "mau so phai khac 0";
        return 1;
    }
    Phanso psToigian = toigianphanso(ps);
    cout << "Phan so sau khi toi gian la " << psToigian.tuSo << "/" << psToigian.mauSo;
    return 0;
}