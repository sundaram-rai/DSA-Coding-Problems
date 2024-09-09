#include <iostream>
#include <vector>
using namespace std;

void spiralTraverse(vector<vector<int>>& matrix, int rows, int cols) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right across the top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++; // Move down to the next row

        // Traverse from top to bottom down the right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; // Move left to the next column

        // Traverse from right to left across the bottom row (if still within bounds)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--; // Move up to the next row
        }

        // Traverse from bottom to top up the left column (if still within bounds)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++; // Move right to the next column
        }
    }
}

int main() {
    int rows, cols;

    // Take matrix dimensions as input
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Create a matrix and take elements as input
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Call the function to traverse the matrix in spiral order
    cout << "Spiral Order: ";
    spiralTraverse(matrix, rows, cols);
    cout << endl;

    return 0;
}
