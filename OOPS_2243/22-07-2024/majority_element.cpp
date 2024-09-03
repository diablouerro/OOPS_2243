#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 5, 5};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > n / 2) {
            cout << arr[i] << " is in majority" << endl;
            return 0;
        }
    }   
    return 0;
}