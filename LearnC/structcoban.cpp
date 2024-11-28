#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

typedef struct Point3D_s {
    double x;
    double y;
    double z;
} Point3D;
typedef struct Date_s {
    int day;
    int month;
    int year;
} Date;
int main() {
    Point3D M = {5, 10, 20};
    Date QK = {2, 9, 1945};
    cout << M.x << ','
        << M.y << ','
        << M.z << ',';
    Date *p = &QK;
    cout << p->day << "/" << p->month << "/" << p->year;
    return 0;
}