#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr) {
    int n = arr.size() + 1;
    int expectedSum = n * (n + 1) / 2; 
    int actualSum = 0;
    for (int num : arr) {
        actualSum += num;
    }
    return expectedSum - actualSum;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array (excluding the missing number): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr);

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
