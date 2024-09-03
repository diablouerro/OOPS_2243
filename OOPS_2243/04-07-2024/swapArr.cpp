#include <iostream>
using namespace std;

// inline function will be executed without going in stack;

void swapArr(int *arr, int n) {
    n = ((n & 1) == 1) ? n - 1 : n;
    for (int i = 0; i < n; i+= 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    swapArr(arr, n);

    // Printing the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}