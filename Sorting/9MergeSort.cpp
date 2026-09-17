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
        if (arr1[i] <= arr2[j]) {
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
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1=n/2 , n2= n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    //magic aka recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    vector<int> res = merge(a, b);
    a.clear(); // for better space complexity
    b.clear();
    for (int i = 0; i < n; i++) v[i] = res[i];
}

int main() {
    vector<int> arr1 = {2, 1, 6, 5, 12, 11};

    cout << "Array 1: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    mergeSort(arr1);

    cout << "Merged Array: ";
    for (int i = 0; i < arr1.size(); i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
