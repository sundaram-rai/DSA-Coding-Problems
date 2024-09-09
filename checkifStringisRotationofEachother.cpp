#include <iostream>
#include <string>
using namespace std;

bool isRotation(const string& A, const string& B) {
    if (A.length() != B.length()) {
        return false;
    }
    string concatenated = A + A;

    return concatenated.find(B) != string::npos;
}

int main() {
    string A, B;
    cout << "Enter string A: ";
    cin >> A;
    cout << "Enter string B: ";
    cin >> B;

    bool result = isRotation(A, B);

    cout << (result ? "True" : "False") << endl;

    return 0;
}
