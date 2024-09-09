#include <iostream>
#include <cmath>
using namespace std;

int solveEquation(int a, int b) {
    return pow((a + b), 3);
}

int main() {
    int a, b;
    cout << "Enter values for a and b: ";
    cin >> a >> b;
    
    int result = solveEquation(a, b);
    cout << "The result of the equation is: " << result << endl;
    
    return 0;
}
