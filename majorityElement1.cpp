#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMajorityElement(const vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> majority_element_n_2;
    for (int num : nums) {
        majority_element_n_2[num]++;
    }

    for (auto it : majority_element_n_2) {
        if (it.second > n / 2) {
            return it.first;
        }
    }

    return -1;
    
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMajorityElement(arr);

    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}

//        int el, cnt_el = 0;
//        for (int i = 0; i < n; i++) {
//            if (cnt_el == 0) {
//                el = nums[i];
//                cnt_el = 1;
//            }
//            else if (nums[i] == el) cnt_el++;
//            else cnt_el--;
//        }
//
//        int cnt_majority;
//        for (int i = 0; i < n; i++) {
//            if (nums[i] == el) cnt_majority++;
//        }
//
//        if (cnt_majority > n / 2) return el;
//        return -1;