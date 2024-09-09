#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            duplicates.insert(num);
        } else {
            seen.insert(num);
        }
    }

    return vector<int>(duplicates.begin(), duplicates.end());
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> result = findDuplicates(arr);

    cout << "Duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
