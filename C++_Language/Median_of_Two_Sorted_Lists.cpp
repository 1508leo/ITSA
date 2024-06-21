// English -> Sorting -> 5.
// https://github.com/1508leo/ITSA/blob/main/C_Language/Median_of_Two_Sorted_Lists.c
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Comparison function for sorting integers
bool compare(int a, int b) {
    return a < b;
}

int main() {
    int rounds, size;

    cin >> rounds;

    for (int i = 0; i < rounds; i++) {
        cin >> size;

        vector<int> matrix(2 * size);

        // Input first set of elements
        for (int j = 0; j < size; j++) {
            cin >> matrix[j];
        }

        // Input second set of elements
        for (int j = 0; j < size; j++) {
            cin >> matrix[size + j];
        }

        // Sorting using std::sort
        sort(matrix.begin(), matrix.end(), compare);

        // Calculate median
        int median_index = size - 1;
        int median = matrix[median_index];

        cout << median << endl;
    }

    return 0;
}

