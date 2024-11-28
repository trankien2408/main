#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

char* VietName(char* s) {
    const char space = 32;
    char last = space;
    int k = 0;
    for (int i = 0; char c = s[i]; i++) {
        if (last == space) {
            if (c == space) continue;
            if (c >= 'a' && c <= 'z') c -= space;
        } else if (c >= 'A' && c <= 'Z') c += space;
        s[k++] = last = c;
    }
    s[last == space ? k-1 : k] = 0;
    return s;
}
int main () {
    char s[] = "tRan TrUng KiEn";
    cout << '|' << VietName(s) << '|';
    return 0;
}