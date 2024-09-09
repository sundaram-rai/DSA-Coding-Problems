#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatedChar(const string& str) {
    unordered_map<char, int> frequency;
    for (char ch : str) {
        frequency[ch]++;
    }
    for (char ch : str) {
        if (frequency[ch] == 1) {
            return ch;
        }
    }

    return '\0';
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    char result = firstNonRepeatedChar(input);

    if (result) {
        cout << "The first non-repeated character is: " << result << endl;
    } else {
        cout << "No non-repeated character found." << endl;
    }

    return 0;
}
