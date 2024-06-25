#include <iostream>

int main() {
    const int rows = 5;
    const int cols = 5;
    int array[rows][cols] = {
        {5, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, -13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };


    for (int i = 0; i < rows; ++i) {
        bool hasNegative = false;
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] < 0) {
                hasNegative = true;
                break;
            }
        }

        if (!hasNegative) {
            int product = 1;
            for (int j = 0; j < cols; ++j) {
                product *= array[i][j];
            }
            std::cout << "Product of elements in row " << i << ": " << product << std::endl;
        }
    }


    int sumDiagonal = 0;
    for (int i = 0; i < rows; ++i) {
        sumDiagonal += array[i][i];
    }

    std::cout << "Sum of the main diagonal elements: " << sumDiagonal << std::endl;

    return 0;
}
