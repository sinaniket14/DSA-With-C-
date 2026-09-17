#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, vowels;
    getline(cin, str);  // Read input string

    // Extract vowels from the input string
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels += ch;  // Store vowels in a new string
        }
    }

    int n = vowels.length();  // Length of the extracted vowels string
    int totalSubstrings = (n * (n + 1)) / 2;  // Number of substrings formula

    // Output results
    cout << "Extracted vowels: " << vowels << endl;
    cout << "Total substrings: " << totalSubstrings << endl;

    return 0;
}
