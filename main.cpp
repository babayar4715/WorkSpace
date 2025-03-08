#include <iostream>

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing elements
    std::cout << "Element at [0][0]: " << matrix[0][0] << std::endl; // Output: 1
    std::cout << "Element at [2][3]: " << matrix[2][3] << std::endl; // Output: 12

    // Modifying an element
    matrix[1][2] = 99;
    std::cout << "Modified element at [1][2]: " << matrix[1][2] << std::endl; // Output: 99

return 0; }