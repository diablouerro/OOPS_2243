#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str1[13] = "a";
    char str2[14] = "b";
    cout << str1 << endl;
    if (strcmp(str1, str2) == 1) {
        cout << "str1 is greater" << endl;
    }
    return 0;
}
