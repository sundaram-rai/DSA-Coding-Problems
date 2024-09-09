#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;    // Numbers <= 1 are not prime
    if (num <= 3) return true;     // 2 and 3 are prime
    if (num % 2 == 0 || num % 3 == 0) return false;  // Eliminate multiples of 2 and 3
    
    for (int i = 5; i * i <= num; i += 6) {  // Check divisibility by numbers of form 6k ± 1
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
