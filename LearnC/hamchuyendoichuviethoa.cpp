#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

char* ToUpper(const char* s) {
    static char result[100];
    for (int i = 0; s[i]; ++i) {   
        if (s[i] >= 'a' && s[i] <= 'z') {
            result[i] = s[i] - 32;
        } else {
            result[i] = s[i];
        }
    }
    result[strlen(s)] = '\0';
    return result;
}
int main() {
    char input[100];
    cout << "Nhap mot xau: ";
    cin.getline(input, sizeof(input));
    char* k = ToUpper(input);
    cout << "Sau khi chuyen: " << k;
    return 0;
}