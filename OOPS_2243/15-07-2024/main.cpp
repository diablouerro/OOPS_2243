#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 2, 1};
    int n= 5;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; i++) {
            if (arr[i] == arr[j]) {
                cout << "True" << endl;
                return 0;
            }
        }
    }
    cout << "False" << endl;
    return 0;
}