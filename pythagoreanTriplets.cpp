#include <iostream>
#include <vector>
using namespace std;

// Function to print all Pythagorean triplets with values smaller than the given limit
void findPythagoreanTriplets(int limit) {
    vector<vector<int>> triplets;
    
    // Iterate over possible values of m and n
    for (int m = 2; m * m < limit; ++m) {
        for (int n = 1; n < m; ++n) {
            // Generate the triplet
            int a = m * m - n * n;
            int b = 2 * m * n;
            int c = m * m + n * n;

            // Check if the triplet is within the limit
            if (c < limit) {
                triplets.push_back({a, b, c});
            }
        }
    }

    // Print the results
    for (const auto& triplet : triplets) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    findPythagoreanTriplets(limit);

    return 0;
}
