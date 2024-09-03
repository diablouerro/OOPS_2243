// reverse a string
#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char *str) {
    int n = strlen(str);
    for (int s = 0, e = n - 1; s < e; s++, e--) {
        swap(str[s], str[e]);
    }
}

int main() {
    char str[50];
    cin >> str;
    cout << str << endl;
    reverseString(str);
    cout << str << endl;
    return 0;
}