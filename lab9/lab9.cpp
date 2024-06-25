#include <iostream>

int main() {
    const int rows = 5;
    const int cols = 5;
    int array[rows][cols] = {
        {5, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };


    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            sum += array[i][j];
        }
    }


    int maxVal = array[0][0];
    int minVal = array[0][0];
    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > maxVal) {
                maxVal = array[i][j];
                maxRow = i;
                maxCol = j;
            }
            if (array[i][j] < minVal) {
                minVal = array[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }


    bool sameRow = (maxRow == minRow);
    bool sameCol = (maxCol == minCol);


    std::cout << "Sum of elements above the main diagonal: " << sum << std::endl;
    std::cout << "Maximum element: " << maxVal << " at position (" << maxRow << ", " << maxCol << ")" << std::endl;
    std::cout << "Minimum element: " << minVal << " at position (" << minRow << ", " << minCol << ")" << std::endl;
    if (sameRow) {
        std::cout << "Maximum and minimum elements are in the same row." << std::endl;
    }
    else if (sameCol) {
        std::cout << "Maximum and minimum elements are in the same column." << std::endl;
    }
    else {
        std::cout << "Maximum and minimum elements are not in the same row or column." << std::endl;
    }

    return 0;
}
