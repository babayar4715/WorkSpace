#include <iostream> 

int main() {
    
    int num1 {10};
    int num2 {20};
    num1 = num2 = 1000;
    
    std::cout << "First number: " << num1 << std::endl;
    std::cout << "Second number: " << num2 << std::endl;

    
    return 0;
    
}