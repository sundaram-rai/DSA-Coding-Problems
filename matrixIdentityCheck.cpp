#include <iostream>
#include <vector>

using namespace std;

bool areIdentical(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int rowsB = B.size();
    int colsB = B[0].size();

    // Check if dimensions are the same
    if (rowsA != rowsB || colsA != colsB) {
        return false;
    }

    // Compare each element
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            if (A[i][j] != B[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    // Define matrices A and B
    vector<vector<int>> A = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };
    
    vector<vector<int>> B = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    // Check if matrices are identical
    if (areIdentical(A, B)) {
        cout << "Matrices are identical" << endl;
    } else {
        cout << "Matrices are not identical" << endl;
    }

    return 0;
}
