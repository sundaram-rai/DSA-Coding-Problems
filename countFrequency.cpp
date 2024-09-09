#include <iostream>
#include <map>
#include <vector>
using namespace std;

void countOccurrences(const vector<int>& arr) {
    map<int, int> frequency;
    
    for (int num : arr) {
        frequency[num]++;
    }
    for (auto& pair : frequency) {
        cout << pair.first << " occurs " << pair.second << " times" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    countOccurrences(arr);
    
    return 0;
}
