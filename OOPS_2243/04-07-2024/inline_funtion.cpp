#include <iostream>
using namespace std;

// inline function will be executed without going in stack;

int maxEle(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The max element in array is: " << maxEle(arr, n) << endl;
    return 0;
}