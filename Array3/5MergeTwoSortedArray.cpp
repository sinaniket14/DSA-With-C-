#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n);
    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // res

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            res[k] = arr1[i];
            i++;
        } else { 
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n) { // Copy remaining elements of arr1
        res[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) { // Copy remaining elements of arr2
        res[k] = arr2[j];
        j++;
        k++;
    }

    return res;
}

int main() {
    vector<int> arr1 = {1, 4, 5, 8};
    vector<int> arr2 = {2, 3, 6, 7, 10, 12};

    cout << "Array 1: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    vector<int> v = merge(arr1, arr2);

    cout << "Merged Array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
