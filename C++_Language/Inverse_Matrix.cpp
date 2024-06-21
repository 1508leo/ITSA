// Basic -> 11.
// https://e-tutor.itsa.org.tw/mod/programming/view.php?id=30760
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row, col;
    vector<vector<int> > matrix;

    // Input dimensions of the matrix
    cin >> row >> col;

    // Resize the matrix to the specified dimensions
    matrix.resize(row, vector<int>(col));

    // Input elements of the matrix
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print elements of the transposed matrix
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            cout << matrix[i][j];
            if (i != row - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
