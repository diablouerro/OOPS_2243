// reverse a string
#include <iostream>
#include <cstring>
using namespace std;

bool checkPallindrome(char *str) {
    int n = strlen(str);
    for (int s = 0, e = n - 1; s < e; s++, e--) {
        if (str[s] != str[e]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[50];
    cin >> str;
    if (checkPallindrome(str)) {
        cout << "String is pallindrome" << endl;
    }
    else {
        cout << "String is not pallindrome" << endl;
    }
    return 0;
}