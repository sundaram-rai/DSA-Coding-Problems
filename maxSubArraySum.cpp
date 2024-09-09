#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(const vector<int>& nums) {
	int sum = 0, maxsum = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        sum = sum + nums[i];
        if (sum > maxsum) maxsum = sum;
        if (sum < 0) sum = 0;
    }
    return maxsum;
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

    int result = maxSubarraySum(arr);
    cout << "The maximum sum of a contiguous subarray is: " << result << endl;

    return 0;
}
