// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3 
// 3 2 2 2 3
// 3 3 3 3 3
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << n - j << " ";
        }
        for (int j = 0; j < 2* n - 2 - (2 * i); j++) {
            cout << n - i << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << n - 1 - i + j + 2 << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            cout << n - j << " ";
        }
        for (int j = 0; j < 1 + (2 * i); j++) {
            cout << i + 2 << " ";
        }
        for (int j = 0; j < n - 1 - i; j++) {
            cout << i + 2 + j << " ";
        }
        cout << endl;
    }
    return 0;
}