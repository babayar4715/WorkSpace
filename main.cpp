#include <iostream> // Include the input-output stream library

using namespace std;

int main() {
    // Declare a 3D array with 2 layers, 3 rows, and 4 columns
    int cube[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // Accessing elements
    // Print the element at the first layer, first row, first column
    cout << "Element at [0][0][0]: " << cube[0][0][0] << endl; // Output: 1

    // Print the element at the second layer, third row, fourth column
    cout << "Element at [1][2][3]: " << cube[1][2][3] << endl; // Output: 24

    // Modifying an element
    // Change the element at the first layer, second row, third column
    cube[0][1][2] = 99;
    
    // Print the modified element
    cout << "Modified element at [0][1][2]: " << cube[0][1][2] << endl; // Output: 99

    // Loop through and print all elements in the 3D array
    for (int layer = 0; layer < 2; ++layer) { // Loop through layers
        for (int row = 0; row < 3; ++row) { // Loop through rows
            for (int column = 0; column < 4; ++column) { // Loop through columns
                // Print the current element
                cout << "cube[" << layer << "][" << row << "][" << column << "] = " 
                     << cube[layer][row][column] << endl;
            }
        }
    }

    return 0; // Return 0 to indicate successful execution
}
