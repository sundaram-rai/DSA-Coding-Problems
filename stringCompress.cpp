#include <iostream>
#include <string>
using namespace std;

string compressString(const string& str) {
    string result = "";
    int count = 1;
    
    for (int i = 1; i <= str.length(); i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            result += str[i - 1];
            if (count > 1) {
                result += to_string(count);
            }
            count = 1;
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter the string: ";
    cin >> input;
    
    string compressed = compressString(input);
    cout << "Compressed String: " << compressed << endl;
    
    return 0;
}
