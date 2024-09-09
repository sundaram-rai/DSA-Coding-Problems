#include <iostream>
#include <cstring>  // For strlen function

using namespace std;

// Function to move all '#' characters to the front of the string
char* moveHash(char str[], int n) {
    int hashCount = 0;

    // Count the number of '#' characters
    for (int i = 0; i < n; ++i) {
        if (str[i] == '#') {
            ++hashCount;
        }
    }

    // Rearrange the string: move '#' characters to the front
    int index = 0;
    // Place '#' characters at the beginning
    for (int i = 0; i < hashCount; ++i) {
        str[index++] = '#';
    }

    // Place the remaining characters
    for (int i = 0; i < n; ++i) {
        if (str[i] != '#') {
            str[index++] = str[i];
        }
    }

    // Null-terminate the string
    str[index] = '\0';

    return str;
}

int main() {
    // Define the input string and its length
    char str[] = "Move#Hash#to#Front";
    int n = strlen(str);

    // Call the function to rearrange the string
    char* result = moveHash(str, n);

    // Print the result
    cout << "Output: " << result << endl;

    return 0;
}
