#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    int m = arr1.size();
    int n = arr2.size();
    vector<int> result(m + n);
    int i = m - 1, j = n - 1, last = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            result[last] = arr1[i];
            i--;
        } else {
            result[last] = arr2[j];
            j--;
        }
        last--;
    }
    while (j >= 0) {
        result[last] = arr2[j];
        j--;
        last--;
    }
    while (i >= 0) {
        result[last] = arr1[i];
        i--;
        last--;
    }

    return result;
}

int main() {
    int n1, n2;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of the first array (sorted): ";
    for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of the second array (sorted): ";
    for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }

    vector<int> result = mergeSortedArrays(arr1, arr
