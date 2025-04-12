#include <iostream> 
#include <vector>
/*
int main () {
    std::vector<int> numbers = {10, 20, 30, 40};
    
    numbers.push_back(50);
    numbers[1] = 25;
    
    std::cout << "Vector elements: ";
    for (int num : numbers ) {
        std::cout << num << " ";
    }
    return 0;
}
*/
/*
int main () {
    std::vector<int> numbers;
    
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    
    std::cout << "Vector after push_back: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}
*/

int main () {
    std::vector<int> numbers; 
    // Push_back (value) -> Adds am element to the end
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    
    std::cout << "After push_back: ";
    for (int num : numbers) {
        std::cout << num << " " ;
    }
    
    
    std::cout << "\nSize of vector: " << numbers.size() << std::endl;
    
    // at (index) -> Access safely with bounds checking 
    std::cout << "Element at index 2: " << numbers.at(2) << std::endl;
    
    // pop_back(0 -> Removes the last element 
    numbers.pop_back();
    std::cout << "After pop_back, size: " << numbers.size() << std::endl;
    
    // resize(n) -> changes size 
    numbers.resize(8, 55);// Expands to size, 5 filling new slots with 99
    std::cout << "After resize: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\nSize after resize: " << numbers.size() <<std::endl;
    
    // clear () -> empties the vector 
    numbers.clear();
    std::cout << "After clear, vector size: " << numbers.size() << std::endl;
    
    return 0;

}