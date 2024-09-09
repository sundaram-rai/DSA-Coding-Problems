#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;  // Not a palindrome
        }
        left++;
        right--;
    }
    
    return true;  // Is a palindrome
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;

    bool result = isPalindrome(input);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
