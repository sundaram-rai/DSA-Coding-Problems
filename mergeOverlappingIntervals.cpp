#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> mergeIntervals(vector<pair<int, int>>& intervals) {
    vector<pair<int, int>> merged;
    sort(intervals.begin(), intervals.end());
    merged.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i].first <= merged.back().second) {
            merged.back().second = max(merged.back().second, intervals[i].second);
        } else {
            merged.push_back(intervals[i]);
        }
    }
    return merged;
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<pair<int, int>> intervals(n);
    cout << "Enter the intervals (start and end): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    vector<pair<int, int>> result = mergeIntervals(intervals);

    cout << "Merged Intervals: " << endl;
    for (auto& interval : result) {
        cout << "[" << interval.first << "," << interval.second << "] ";
    }
    cout << endl;

    return 0;
}

//OR

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
    if (n == 0)
        return {};
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> output;
    int low = intervals[0][0];
    int high = intervals[0][1];

    for (int i = 1; i < n; i++) {
        if (intervals[i][0] <= high) {
            high = max(high, intervals[i][1]); 
        } else {
            output.push_back({low, high});
            low = intervals[i][0];
            high = intervals[i][1];
        }
    }
    output.push_back({low, high});
    return output;
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter the intervals (start and end):\n";
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> mergedIntervals = merge(intervals);

    cout << "The merged intervals are:\n";
    for (const auto& interval : mergedIntervals) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}

