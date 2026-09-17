#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap strings if they are in wrong order
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    string arr[] = {"banana", "apple", "mango", "grapes", "orange"};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    bubbleSort(arr, n);

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
